#include <fcntl.h>
#include <unistd.h>
#include "header.h"

/* ==================================================== *
 *  Task 1 - File Descriptors. Read from a file, copy   *
 *  to another file given as second parameter.		*
 * ====================================================	*/
int main(int argc, char *argv[])
{
    int src, dest;
    int in, out;
    char buffer[BUF_SIZE];

    if(argc < 3 || argc > 3)  /* We need 1 or 2 args.	*/
	return (1);

    src = open(argv[1], O_RDONLY); /* Open the file.	*/
    if(src == -1) {
	close(src);
	return (1);
    }

    dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if(dest == -1) {
	close(dest);
	return (1);
    }

    while((in = read(src, buffer, BUF_SIZE))) { 
	out = write(dest, buffer,  in);
	if(in != out) {	 /* if something went wrong...	*/
	    close(src);
	    close(dest);
	    return 1;
	}
    }
	
    close(src); close(dest); /* Closing the files.	*/
    
    return (0);
}

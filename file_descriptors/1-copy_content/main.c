#include "header.h"

/* ==================================================== *
 *  Task 1 - File Descriptors. Read from a file, copy   *
 *  to another file given as second parameter.		*
 * ====================================================	*/

int main(int argc, char *argv[])
{
    int i, src, dest;
    char buffer[BUF_SIZE];

    if(argc != 3)  /*	We need exactly 2 arguments.	*/
	return (1);

    if((src = open(argv[1], O_RDONLY)) == -1) {
	close(src);/*	Opening the source file.	*/
	return (1);
    }

    if((dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644)) == -1) {
	close(dest); /* Opening the destination file.	*/
	return (1);
    }

    if((i = copyFile(src, dest, buffer)) == 1)
	return i;	/*	Making the copy.	*/
	
    if(close(src) == -1 || close(dest) == -1)
	return (1);	/*	Closing the files.	*/
    
    return (0);
}

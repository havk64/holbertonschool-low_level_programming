#include "header.h"

/* ==================================================== *
 *  Task 0 - File Descriptors. Read from a file, prints *
 *  to standard output.					*
 * ====================================================	*/

int main(int argc, char *argv[])
{
    int file, in;
    char c[BUF_SIZE];

    if(argc != 2)  /* If no argument, return 1.		*/
	return (1);

    file = open(argv[1],O_RDONLY); /* Open the file.	*/
    if(file == -1) return (1);

    while((in = read(file, c, BUF_SIZE))) /* reading each char.	*/
	write(1, c, in);

    if(close(file)) return (1); /* Closing the file.	*/
    
    return (0);
}

#include <fcntl.h>
#include <unistd.h> 

/* ==================================================== *
 *  Task 0 - File Descriptors. Read from a file, prints *
 *  to standard output.					*
 * ====================================================	*/
int print_char(int c) /* Print Char function.		*/
{
    return(write(1, &c, 1));
}

int main(int argc, char *argv[])
{
    int file;
    char stream;

    if(argc != 2)  /* If no argument, return 1.		*/
	return (1);

    file = open(argv[1],O_RDONLY); /* Open the file.	*/
    if(file == -1) return (1);

    while(read(file, &stream, 1)) /* reading each char. */
	print_char(stream);

    if(close(file)) return (1); /* Closing the file.	*/
    
    return (0);
}

#include "header.h"

/* ===========================================================  *
 *  Task 3 - File Descriptors.                                  *
 *  The "Cat clone", reads from stdin, prints to stdout.	*
 * ===========================================================  */
int logIt(int fd, char bf[])
{			/* Separate function to print to stdout */
    int in, out;
    
    while((in = read(fd, bf, BUF_SIZE))) { /* Reads 8192 bits.	*/
	out = write(1, bf, in); /*	Writes what it reads.	*/
	if(out != in) return (1);
    }
    return (0);
}

int main(int ac, char *av[])
{
    int i, fd, ret;
    char bf[BUF_SIZE];
    
    if(ac > 1) {
	for(i = 1; i < ac; i++) {
	    if((fd = open(av[i], O_RDONLY)) == -1)
		return (1);
	    ret = logIt(fd, bf); /* Gets the return of function */
	    if((close(fd) == -1) || (ret == 1 ))
	      /* ^^^	   Closing the file(s).			*/
		return (1);
	}       
    }
    else	/* if no parameters are given, reads from stdin.*/
	return logIt(0, bf);

    return (0);
}

	    

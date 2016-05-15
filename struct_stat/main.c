#include "stat.h"

/* 
 * Print status of files on argument list.
 */
int main(int argc, char *argv[])
{
    {
	struct stat status_buf;

	if (argc < 2)
	{
	    fprintf(stderr, "statfile file1 ...\n");
	    exit(-1);
	}
	while(--argc)
	{
	    if( stat(*++argv, &status_buf) < 0 )
		perror(*argv);
	    else {
		report(*argv, &status_buf);
		if((print(*argv, &status_buf) == 0))
		   return 0;
	    }
	}
    }
    return 0;
}



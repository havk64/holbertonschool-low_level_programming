#include "header.h"

/* ===========================================================	*
 *  Task 2 - File Descriptors.					*
 *  The program prints the permissions of a file.		*
 * ===========================================================	*/

int main(int argc, char *argv[])
{
    struct stat statFile;

    if(argc != 2)	/*	Checking the parameters.	*/
	return (1);

    if(lstat(argv[1], &statFile) == -1) return 1; /*Using lstat.*/
    print(statFile);	/*	Call to the print function.     */

    return (0);
}

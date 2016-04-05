#include <stdio.h>

/* ========================================================= *
 *      This function prints all arguments it receives.      *
 * ========================================================= */
int main(int argc, char *argv[])
{
    int x = 0;
    while(x < argc) {
	printf("%s\n", argv[x]);
	    x++;
    }
    return(0);
}

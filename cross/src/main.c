/* ===---main.c--------------------------------------------------===
 *  Cross Project - Alexandre Gautier.
 * ===---Requirements--------------------------------------------===
 *  "Write a program that print a cross on the standard output"
 *  * Your program must be compiled and link via a unique Makefile.
 *  * Your program must take the size of the cross as a command-line
 *  argument
 *
 *  by Alexandro de Oliveira
 * ===-----------------------------------------------------------===
 */

#include "cross.h"

int main(int argc, char * argv[])
{
	if(argc > 2 || isNum(argv[1])) {
		print("Usage: cross number\n");
		exit(1);
	}
	if(argv[1] != NULL) 
		printX(argv[1]);
	else
	       exit(1);
	return (0);
}

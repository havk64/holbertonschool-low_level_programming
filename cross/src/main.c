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
/* 
 * Main function, checks the user input.
 */
int main(int argc, char * argv[])
{
	if(argc == 1) return 0;
	if(argc > 2 || isNum(argv[1])) {
		print("Usage: cross number\n");
		return (0);
	} else {
		printX(argv[1]);
	}
	return (0);
}

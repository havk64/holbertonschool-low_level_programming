#include "cross.h"

/* 
 * Prints a given string.
 */
void print(char * s)
{
	write(1, s, len(s));
}

int print_char(char c)
{
	return (write(1, &c, 1));
}
/* 
 * Prints each line of our 'X'
 */
void print_line(int o, int n)
{
	int i;
	for(i = 0; i <= n; i++) {
		if(o == n - o && i == o) {
			print_char('X');
		} else if(i == o) {
			print_char('\\');
		} else if(i == n - o) {
			print_char('/');
		} else {
			print_char(' ');
	       	}
	}
	print_char('\n');
}
/* 
 * Main Print 'X' function.
 */
void printX(char *s)
{
	int i, n;
	n = atoi(s) - 1 ;
	for(i = 0; i <= n; i++) {
		print_line(i, n);
	}
}


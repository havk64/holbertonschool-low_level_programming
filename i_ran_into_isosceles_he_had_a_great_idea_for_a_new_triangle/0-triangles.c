#include "my_functions.h"
#include <unistd.h>
/*Print Char, accepts a character and prints it.*/
int print_char(char c){
	return(write(1, &c, 1));
}
/*Print Stars, accepts in integer and prints an odd number of starts(*)i.*/
void print_stars(int n)
{
	int number;
	number = n + n +1;
	while(number){
		print_char('*');
		number--;
	}
}
/*Print Triangle, print each triangle with n numbers of lines, where n is the argument.*/
void print_triangle(int n)
{
	int i, j, number;
	number = n;
	for( i = 0; i < n ; i++){
		number--;
		for(j = 0; j < number; j++){
			print_char(' ');
		}
		print_stars(i);
		print_char('\n');
	}
}
/* Uses the print_triangle to prints the triangle n times, each triangle with h lines.*/
void triangles_in_the_term(int h, int n)
{
	while(n)
	{
		print_triangle(h);
		n--;
	}
}

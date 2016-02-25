#include "my_functions.h"
#include <unistd.h>

int print_char(char c){
	return(write(1, &c, 1));
}
void print_stars(int n)
{
	int number;
	number = n + n +1;
	while(number){
		print_char('*');
		number--;
	}
}
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
void triangles_in_the_term(int h, int n)
{
	while(n)
	{
		print_triangle(h);
		n--;
	}
}

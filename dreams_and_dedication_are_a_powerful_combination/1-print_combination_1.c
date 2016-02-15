#include "my_functions.h"

void print_combination_1(void)
{
	int n;
	for(n=0; n <10; n++){ /*=> iterate through each single digit */
		print_char(n+48); /*=> prints the number */
		if(n < 9) { /* => if less than 9 prints coma and space */
		print_char(44);
		print_char(' ');	
		}
	}
}

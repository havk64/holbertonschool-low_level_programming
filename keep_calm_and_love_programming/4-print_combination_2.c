#include <unistd.h>
#include "my_functions.h"
/*=> This function prints all possible combinations of two digits.*/
void print_combination_2(void)
{
	int i;
	int j;
	for(i = 0; i < 9; i++) {
		for(j = 1 + i; j <= 9; j++) {
			print_char(i+'0');
			print_char(j+'0');
			if(i < 8){
				print_char(',');
				print_char(' ');
			}
		}
	}
}

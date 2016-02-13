#include "my_functions.h"

/*The function print_alphabet accepts no argument and iterate through each letter of alphabet
printing each letter utilizing the print_char function.*/
void print_alphabet(void)
{
	char c;
	for(c = 'a'; c <= 'z';c++)
	{
		print_char(c);
	}
}

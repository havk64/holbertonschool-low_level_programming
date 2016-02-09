#include "my_functions.h"

/*Function print_alphabet that accepts no argument and loop through each letter of alphabet
printing each letter utilizing the print_char function.*/
void print_alphabet(void)
{
	char c;
	for(c = 'a'; c <= 'z';c++)
	{
		print_char(c);
	}
}

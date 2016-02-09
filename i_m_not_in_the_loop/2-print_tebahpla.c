#include "my_functions.h"

/* The funcion print_tebahpla accepts no argument and iterate through each letter of alphabet in reverse order(starting by 'z') and printing each letter using the print_char function. */
void print_tebahpla(void)
{
	char c;
	for(c = 'z'; c >= 'a'; c--)
		print_char(c);
}

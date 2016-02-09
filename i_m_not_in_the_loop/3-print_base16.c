#include "my_functions.h"

/* The function print_base16 accepts no argument and prints all the numbers of base 16 */
void print_base16(void)
{
	int i;

 	for (i=0;i<16;i++)	# Iterate 16 times in acending order.
	{
 	if (i<10)
	print_char(((char) i)+48); # adds 48 to first 10 numbers to get right ascii characters.
	else
	print_char(((char) i)+55); # adds 55 to remaining numbers to get right ascii characters.
	}
}


#include <stdio.h>
/*=> This function that takes an integer as argument, prints all numbers from its value to 98, followed by a new line. */
void print_to_98(int n)
{
	int i;
	if(n <= 98)
		for(i = n; i <=98; i++) {
			if(i == 98)
                        	printf("%d\n", i);
			else
				printf("%d, ", i);
		}
	else
		for(i=n; i >= 98; i--)
			if(i == 98)
                                printf("%d\n", i);
			else
				printf("%d, ", i);

}

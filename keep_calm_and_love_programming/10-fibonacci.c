#include <stdio.h>
/*=> This function prints the sum of even-valued terms of Fibonacci. */
int main(void)
{
	int i;
	unsigned long f = 0;
	unsigned long s = 1;
	unsigned long total = 0;
	unsigned long sum = 0;
	for(i = 0; total < 4000001; i++){
		total = f + s;	
		if(!(total % 2)) {
			sum += total;
		}
		f = s;
		s = total;
	}
	printf("%lu\n", sum);
	return (0);
} 


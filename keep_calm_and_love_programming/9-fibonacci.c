#include <stdio.h>
/*=> This function prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line. */
int main(void)
{
	int i;
	unsigned long f = 0;
	unsigned long s = 1;
	unsigned long total;
	for(i = 0; i < 51 ; i++){
		total = f + s;	
		if(i == 50){
			printf("%lu", total);
		} else {
			printf("%lu, ", total);
			f = s;
			s = total;
		}
	}
	printf("\n");
	return (0);
} 

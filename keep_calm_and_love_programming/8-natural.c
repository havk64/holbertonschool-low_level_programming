#include <stdio.h>
/*=> This  function prints the sum of all the multiples of 3 or 5 below 1024 (excluded), followed by a new line.*/
int main(void)
{
	int total;
	int i;
	for(i = 0; i < 1024; i++){
		if(i % 3 == 0 || i % 5 == 0){
			total += i;
		}
	}
	printf("%d\n", total);
	return (0);
}
			

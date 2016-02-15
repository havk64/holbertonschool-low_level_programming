#include <stdio.h>
/* Prints the numbers from 1 to 100. But for multiples of three print Fizz
 * instead of the number and for the multiples of five print Buzz */
int main(void)
{
	int i;
	for(i = 1; i <= 100; i++){
		if(i % 3 == 0 && i %5 == 0){
			printf("FizzBuzz");
		}else if(i%3==0){
				printf("Fizz");
		}else if(i%5==0){
				printf("Buzz");
		}else {
		printf("%d",i);
		}
		if(i != 100){
			printf(" ");
		}
	}

	return(0);
}

#include "my_functions.h"
/*=> This function that takes an integer in parameter and prints it.*/
void print_number(int n) /*=> Control flow to use function print accordingly */
{  
	if (n == 0){     /*=> If n is zero prints zero */
       		print_char(48);
	}
	else if( n > 0){
        	print(n);
	}
	else {		/*=> If n is negative converts to absolute value */
		print_char('-');
		n = -n;
		print(n); 
	}

}
void print(int n)        /*=> Uses the print_char to print each digit */
{
	int number=n;
	int power=1;
	int print;
	while (number > 9){  /*=> Finds the lenght of decimal  */
		number /= 10;
		power *= 10;
	}
	while (n > 0){ 	 /*=> Finds each digit and prints it with print_char */
		print = n / power;
		n %= power;
		power /= 10;
		print_char(print + 48);
	}
}

#include  <limits.h>
/*=> This function returns the first digit of a number.*/
int first_digit(int n)
{
	int power;
	unsigned long  number;
	power = 1;
	if(n == INT_MIN){
		n = n/-10;
	} 
	else if(n < 0){
		n = -n;
	}
	number = n;
	while(number > 9 ) {
		number /= 10;
		power *= 10;
	}
	return n / power;
}

#define INT_MIN -2147483648

void print(int n);
int print_char(char c);

/*
 * This function that takes an integer as parameter and prints each digit.   *
 */
void print_number(int n) /*=> Control flow to use function print accordingly */
{  
    if (n == 0)				       /*=> If n is zero prints zero */
	print_char('0');
	
    else if( n >= 0)
	print(n);

    else if(n == INT_MIN){
	print_char('-');
 	n /= 10; n = -n;
	print(n);
	print_char(((n + 4) % 10) + '0');
    }

    else {     /*=> If n is negative converts to absolute value */
	print_char('-');
	n = -n;
	print(n); 
    }
}

void print(int n)		 /*=> Uses the print_char to print each digit */
{
    int digit, number = n, power = 1;

    while (number /= 10)		/*=> Finds the lenght of decimal      */
	power *= 10;

    while (n){ /*=> Finds each digit and prints it with print_char */
	digit = n / power;
	n %= power;
	power /= 10;
	print_char(digit + '0');
    }
}

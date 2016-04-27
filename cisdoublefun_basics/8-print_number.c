int print_char(char c);

/*  ======================================== *
 *  This function calculates the lenght of a *
 *  number and prints each digit.	     *
 *  ======================================== */
void print(int n)
{
    int i, p, digit;
    i = n;
    p = 1;
    while (i /= 10){ 
	p *= 10;
    }
    while (n){ 
	digit = n / p;
	n %= p;
	p /= 10;
	print_char(digit + '0');
    }
}

/*  ======================================== *
 *  This function checks the value and uses  *
 *  the previous function to print a number. *
 *  ======================================== */
void print_number(int n)
{
    if (n == 0) print_char('0');
    else if( n > 0) print(n);
    else {	
	print_char('-');
	n = -n;
	print(n); 
    }
}

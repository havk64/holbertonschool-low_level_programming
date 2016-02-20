int print_char(char c);
/*=> This function prints the last digit of an integer.*/
void print_last_digit(int n)
{
	if(n < 0) {
		n = n*-1;
	}
	while(n > 9) {
		n %= 10;
	}
	print_char(n+48);
}

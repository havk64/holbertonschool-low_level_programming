int first_digit(int n)
{
	int power;
	unsigned long  number;
	power = 1;
	if(n < 0){
		n = -n;
	}
	number = n;
	while(number > 9 ) {
		number /= 10;
		power *= 10;
	}
	return n / power;
}

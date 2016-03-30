int findit(int n, int i)
{
    if(n < 2)
	return (0);
    if(i > n/2)
	return (1);
    if(n % i == 0)
	return (0);
    return findit(n, i+1);
}

int is_prime_number(int n)
{
    return findit(n, 2);
}

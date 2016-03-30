int power(int x, int y)
{
    if(x < 0 || y < 0)
	return (-1);
    else if(y == 0)
	return (1);
    else
	return x * power(x, y-1);
}

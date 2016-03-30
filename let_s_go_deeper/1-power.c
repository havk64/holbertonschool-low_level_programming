
/* =================================================================== *
 *             Returns the value of x raised to the power of y         *
 * =================================================================== */
int power(int x, int y)
{
    if(x < 0 || y < 0) return (-1);
    else if(y == 0) return (1);
    else if( y == 1) return x;
    return x * power(x, y - 1);
}

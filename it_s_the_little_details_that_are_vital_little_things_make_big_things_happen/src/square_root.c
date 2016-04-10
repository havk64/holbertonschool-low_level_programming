/* =================================================================== *
 *                    Helper function to square_root                   *
 * =================================================================== */
int findit(int n, int i)
{
    if(n < 0) return (-1);
    if(i * i == n) return (i);
    if(i * i > n) return (-1);
    return findit(n, i + 1);
}

/* =================================================================== *
 *             Returns the natural square root of a number             *
 * =================================================================== */
int square_root(int n)
{
    return findit(n, 1);
}

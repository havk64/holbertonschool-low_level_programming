int print_char(char c);
/*  ========================================== *
 *  This function takes an integer as argument *
 *  and prints P if the number is positive, N  *
 *  if the number is negative, and Z if the    *
 *  number is zero.			       *
 *  ========================================== */
void positive_or_not(int n)
{
    if(n == 0) print_char('Z');
    if(n > 0)  print_char('P');
    if(n < 0)  print_char('N');
}

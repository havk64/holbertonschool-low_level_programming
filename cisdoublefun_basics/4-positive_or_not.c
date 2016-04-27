int print_char(char c);
void positive_or_not(int n)
{
    if(n == 0) print_char('Z');
    if(n > 0)  print_char('P');
    if(n < 0)  print_char('N');
}

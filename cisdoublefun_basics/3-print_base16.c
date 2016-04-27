int print_char(char c);
/*  ======================================== *
 *  This function prints all the numbers of  *
 *  base 16, from 0 to F.		     *
 *  ======================================== */
void print_base16(void)
{
    int i;
    for(i = 0; i < 10; i++) {
	print_char(i + '0');
    }
    for(i = 'A'; i < 'G'; i++) {
	print_char(i);
    }
}

int print_char(char c);
/*  ======================================== *
 *  This function prints the alphabet in     *
 *  lower case and in reverse order.	     *
 *  ======================================== */
void print_tebahpla(void)
{
    int i;
    for(i = 'z'; i >= 'a'; i--) {
	print_char(i);
    }
}

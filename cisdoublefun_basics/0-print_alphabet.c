int print_char(char c);
/*  =======================================  *
 *  This function prints each character of   *
 *  the alphabet in lowercase		     *
 *  ======================================== */
void print_alphabet(void)
{
    int i;
    for(i = 'a'; i <= 'z'; i++) {
	print_char(i);
    }
}

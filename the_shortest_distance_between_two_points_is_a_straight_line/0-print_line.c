int print_char(char c);
/* ======================================================================== *
 * This function print "n" number of '_' characters, followed by a new line.*
 * ======================================================================== */
void print_line(int n)
{
	while(n > 0) {
		print_char('_');
		n--;
	}
	print_char('\n');
}

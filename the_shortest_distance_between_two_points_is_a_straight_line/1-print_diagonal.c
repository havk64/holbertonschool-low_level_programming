int print_char(char c);

/* ============================================================ *
 * This function print diagonals because diagonals are fun! ;-) *
 * ============================================================ */
void print_diagonal(int n)
{
    int i, j;
    i = 0;
    if(n <= 0) {
	print_char('\n');
    }
    while(n-- > 0) {
	j = i++;
	while(j--)
	    print_char(' ');
	print_char('\\');
	print_char('\n');
    }
}

int print_char(char c);
/* ========================================= *
 * This function prints '*' n times.	     *
 * ========================================= */
void print_ast(int n)
{
    int i;
    for(i = 0; i < n; i++) {
	print_char('*');
    }
}

/* ========================================= *
 * This function uses print_ast to print the *
 * a triangle with n as height.		     *
 * ========================================= */
void print_triangle(int n)
{
    int i;
    for(i = 0; i < n; i++) {
	print_ast(i);
	print_char('\n');
    }
    for(i = n; i > 0; i--) {
	print_ast(i);
	print_char('\n');
    }
    print_char('\n');
}

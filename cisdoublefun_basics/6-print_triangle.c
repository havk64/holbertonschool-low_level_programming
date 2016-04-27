int print_char(char c);
void print_ast(int n)
{
    int i;
    for(i = 0; i < n; i++) {
	print_char('*');
    }
}
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

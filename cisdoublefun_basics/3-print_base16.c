int print_char(char c);
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

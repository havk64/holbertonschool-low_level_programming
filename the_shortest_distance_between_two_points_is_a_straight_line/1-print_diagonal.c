int print_char(char c);

/* This function just print spaces. */
void print_spaces(int n)
{
  while(n) {
    print_char(' ');
    n--;
  }
}

/* This function print diagonals because diagonals are fun! ;-) */
void print_diagonal(int n)
{
  int i;
  i = 0;
  if(n <= 0) {
    print_char('\n');
  }
  while(n > 0) {
    print_spaces(i);
    print_char('\\');
    print_char('\n');
    i++;
    n--;
  }
}

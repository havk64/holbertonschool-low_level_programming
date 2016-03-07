/* This function accepts a string and prints it.*/
int print_char(char c);

void print_string(char *str)
{
  while(*str != '\0') {
    print_char(*str);
    str++;
  }
}

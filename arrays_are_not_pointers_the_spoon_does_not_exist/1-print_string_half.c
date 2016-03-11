int print_char(char c);
/* This function accepts an array of characters(string) and return the lenght of it.*/
int length(char *str) {
  int count;
  count = 0;
  while(*str) {
    count++;
    str++;
  }
  return count++;
}
/* This function prints the second half of an array of characters(string). */
void print_string_half(char *str) {
  int len, half;
  len = length(str);
  half = (len + 1)/2;

  while(half <= len ) {
    print_char(*(str + half));
    half++;
  }
}


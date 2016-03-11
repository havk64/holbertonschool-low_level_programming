int print_char(char c);
/* This function takes an array of string as argument and prints just one character of two */
void print_string_2(char *str) {
  int i;  
  for (i = 0; *(str+i) != 0 ; i++) {
    if(i%2==0) {
      print_char(*(str+i));
    }
  }
}

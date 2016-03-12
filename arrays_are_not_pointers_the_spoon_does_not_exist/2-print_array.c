#include <limits.h>
int print_char(char c);

void print(int n)        /*=> Uses the print_char to print each digit */
{
  int number, power, digit;
  number = n;
  power = 1;

  while (number > 9)     /*=> Finds the lenght of decimal  */
    {
      number /= 10;
      power *= 10;
    }
  while (n > 0)          /*=> Finds each digit and prints it with print_char */
    {
      digit = n / power;
      n %= power;
      power /= 10;
      print_char(digit + '0');
    }
}

void print_number(int n) /*=> Control flow to use function print accordingly */
{  
  if (n == INT_MIN) {
    n /= -10;
  }
  if (n == 0) {          /*=> If n is zero prints zero */
    print_char('0');
  }
  else if( n > 0) {
    print(n);
  }
  else {                 /*=> If n is negative converts to absotulte value */
    print_char('-');
    print(-n ); 
  }
}

void print_array(int *a, int n)
{
  int i;
  i = 0;
  if(n == 0) {
    print_char('\n');
  }
  while(i < n) {
    print_number(*(a + i));
    if(i == (n - 1)) {
      print_char('\n');
    } else {
      print_char(',');
      print_char(' ');
    }
    i++;
  }
}

#include <unistd.h>
#include <limits.h>
/* ======================================================== *
 *             Function print_char()                        *
 * =========================================================*/
int print_char(char c)
{
  return (write(1, &c, 1));
}

/* ======================================================== *
 * Function print() uses print_char() to print each digit   *
 * =========================================================*/
void print(int n)
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

/* ======================================================== *
 *         Function print_number() uses print()             *
 * =========================================================*/
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

/* =========================================================================== *
 *  Function print_array() uses print_number to print each number of an array. *
 *  an array of integers.                                                      *
 * =========================================================================== */
void print_array(int *a, int n)
{
  int i;
  i = 0;
  
  while(i < n) {
    if(i != 0) {
      print_char(',');
      print_char(' ');
    }
    print_number(*(a + i));
    i++;
  }
  print_char('\n');
}

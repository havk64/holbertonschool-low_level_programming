#include "my_functions.h"

void print_combination_2(void)
{ /*=> Prints all combinations of two different digits  */
  int firstD, secondD, i;
  for (firstD = 0, i = 1; firstD < 10; firstD++, i++)
      for(secondD = i; secondD < 10; secondD++)
        {
          if(firstD + secondD != 1) /*=> Ensure to print just smallest combo */
            {
              print_char(',');
              print_char(' ');
            }
          print_char(firstD + 48);
          print_char(secondD + 48);
        }
}

#include "my_functions.h"

void print_number(int n)
{  
    if (n == 0){
        print_char(48);
    }
    else if( n > 0){
        print(n);
    }
    else {
        print_char('-');
        print((n * -1));
    }

}
void print(int n)
{
    int number=n;
    int power=1;
    int print;
    while (number > 9){
        number /= 10;
        power *= 10;
    }
    while (n > 0){
        print = n / power;
        n %= power;
        power /= 10;
        print_char(print + 48);
  }    
}

#include <stdio.h>
/*=> This function finds and prints the largest prime factor of the number 612852475143,
 *=> followed by a new line. */ 
int main(void)
{
    long number = 612852475143;
    long div = 2;
    long target;
    while(number)
    {
        if(number % div){
        div++;
	}
        else
        {
            target= number;
            number /= div;
            if(number == 1){
                printf("%ld\n", target);
                number = 0;
            }
        }
    }
    return 0;
}

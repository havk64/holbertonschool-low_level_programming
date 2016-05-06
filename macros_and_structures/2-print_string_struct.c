#include "str_struct.h"
int print_char(char c);
/*
 * This function finds each digit and prints it using
 * the function print_char.
 */
void print(int n)
{
    int i, p, digit;
    i = n;
    p = 1;

    while (i /= 10)
        p *= 10;
    
    while (n){
        digit = n / p;
        n %= p;
        p /= 10;
        print_char(digit + '0');
    }
}
/*
 * This function prints the content of a struct String.     *
 */
void print_string_struct(struct String *str)
{
    int i;
    for(i = 0; i < str->length; i++)
	print_char(str->str[i]); /* Could use (*str) too    */
    
    print_char(','); 
    print_char(' ');
    print(str->length); /* Uses the function print to print */
    print_char('\n');   /* digit of length of string.	    */
}

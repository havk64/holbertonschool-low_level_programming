#include "my_functions.h"
void first_last(int n, char s, char m)
{
    int i = 0;
    while(i < n){
        if(i == 0 || i == (n - 1)){
            print_char(s);
        } else {
	    print_char(m);
	}
        i++;
    }
}
void print_square(int n)
{
    int i = 0;
    while( i < n ){
	if(i == 0 || i == (n - 1)){
	    first_last(n, 111, 45);
	} else {
	    first_last(n, '|', ' ');
	}
	print_char('\n');
	i++;
    }
}

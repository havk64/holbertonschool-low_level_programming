#include "my_functions.h"

void first_last(int n)
{
        int i;
        for(i = 1; i <= n; i++){
                if(i == 1 || i == n){
                        print_char(111);
                }
                else{
                        print_char(45);
                }
        }
}
void middle(int n)
{
	int i;
	for(i = 1; i<= n; i++){
		if(i == 1 || i == n){
			print_char('|');
		}
		else {
			print_char(' ');
		}
	}
}
void print_square(int n)
{
	int i;
	int r;
	int s = n;
	for(i = 1; i <= n; i++){
		if(i == 1 || i == n){
			first_last(n);
		}
		else{
			middle(n);
		}
		print_char('\n');
	}
}

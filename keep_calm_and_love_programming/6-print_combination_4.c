#include "my_functions.h"
/*=> This function that prints - on one line - all possible combinations of two two-digit numbers.*/
#include "my_functions.h"
/*=> This function prints - on one line - all possible combinations
  => of two two-digit numbers. */
void print_combination_4(void){
    
    int i,j, k,l,a,b;
    for(i = 0;i <= 9;i++){
        for (j = 0;j <= 9;j++){
            for (k = 0;k <= 9; k++){
                for (l = 0;l <= 9; l++){
                    a = i * 10 + j;
                    b = k * 10 + l;
                    if(a<b){
                        print_number(i);
                        print_number(j);
                        print_char(' ');
                        print_number(k);
                        print_number(l);
                        if(  a!=98 ){
                            print_char(',');
                            print_char(' ');
                        }
                    }
                }
            }
        }
    }
} 

/*
void print_combination_4(void)
{
	int i;
	int j;
	int k;
	int l;
	for(i = 0; i < 9; i++)
	{
		for(j = i + 1; j <= 9; j++)
		{
			for(k = j + 1; k <= 9; k++)
			{
				for(l = k + 1; l <= 9; l++)
				{
					print_number(i);
					print_number(j);
					print_char(' ');
					print_number(k);
					print_number(l);
					print_char(',');
				}
			}
		}
	}
}
*/

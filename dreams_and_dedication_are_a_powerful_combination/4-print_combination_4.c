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
                        print_char(i+48);
                        print_char(j+48);
                        print_char(' ');
                        print_char(k+48);
                        print_char(l+48);
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

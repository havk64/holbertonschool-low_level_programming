#include "my_functions.h"
/*=> Prints all combinations of three digits in one line */
void print_combination_3(void){
    int i, j, k;
    for(i = 0;i <= 9; i++){
        for (j = 1; j <=9; j++){
            for (k = 2; k <= 9; k++){
                if((i <= j) && (i != j) && (j <= k) && (j != k)){
                    print_char(i+48);
                    print_char(j+48);
                    print_char(k+48);
                    if(i < 7){
                        print_char(',');
                        print_char(' ');
                    }
                }
            }
        }
    }
}

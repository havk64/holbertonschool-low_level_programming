#include "my_functions.h"
#define NULL (void*)0

/* ===================================================================== *
 * This function takes a character as parameter, which is supposed to be *
 *  one of the operator characters ( +, -, *, /, %)                      *
 * ===================================================================== */
int (*get_op_func(char c))(int a, int b)
{
    char operator[5] = "+-*/%";
    int i;
    int (*array[5])(int,int) = { op_add, op_sub, op_mul, op_div, op_mod };
    for(i = 0; i < 5; i++) {
	if(c == operator[i]) return array[i];
    }
    return NULL;
}

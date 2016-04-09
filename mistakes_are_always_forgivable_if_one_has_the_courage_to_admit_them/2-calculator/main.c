#include <stdio.h> 
#include <stdlib.h>
#include "my_functions.h"

/* ======================================================================= *
 *    This function parse the command-line arguments to retrieve the       * 
 *    operands and the operator                                            *
 * ======================================================================= */
int main(int argc, char *argv[]){
    if (argc != 4 || *get_op_func(*argv[2]) == (NULL)) return 1;
    printf("%d\n", (*get_op_func(*argv[2]))(atoi(argv[1]), atoi(argv[3])));
    return 0;
}

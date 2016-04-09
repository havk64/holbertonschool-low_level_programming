#include <stdio.h>
#include <stdlib.h>
#include "my_functions.h"

int main(int __attribute__((unused)) argc, char *argv[]){
    if ( *get_op_func(*argv[2]) == (NULL)){
	return 1;
    }
    printf("%d\n", (*get_op_func(*argv[2]))(atoi(argv[1]), atoi(argv[3])));
    return 0;
}

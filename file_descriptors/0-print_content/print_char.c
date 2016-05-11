#include "header.h"

int print_char(int c) /* Print Char function.           */
{
    return(write(1, &c, 1));
}

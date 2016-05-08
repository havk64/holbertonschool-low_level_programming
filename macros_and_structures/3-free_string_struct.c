#include <stdlib.h>
#include "str_struct.h"

/*
 * This function frees the allocated memory of a struct
 * given as parameter.
 */
void free_string_struct(struct String *str)
{
    free(str->str);
    free(str);
}

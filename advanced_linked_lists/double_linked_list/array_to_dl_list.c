#include "header.h"

List *array_to_dl_list(char **array)
{
    List * list;
    list = NULL;
    while(*array != NULL) {
	if(add_end_dl_list(&list, *array)) {
	    return NULL;
	}
	array++;
    }
    return list;
}

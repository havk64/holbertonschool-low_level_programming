#include "list.h"
#include <stdlib.h>

/* ============================================= *
 *    Returns the number of node in a list.	 *	
 * ============================================= */
int list_size(List *list) {

    int i  = 0;

    if (list == NULL) {
	return i;
    }

    i++;
    while((list = list->next)) 
	i++;
    
    return i;
}

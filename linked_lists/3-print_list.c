#include "list.h"

/*
 * This function prints each element of a list.	*
 */
void print_list(List *list)
{
    List *node;
    node = list;
    while(node != NULL) {
	print(node->str);/* External function. */
	if(node->next != NULL) {
	    print_char(',');
	    print_char(' ');
	}
	node = node->next;
    }
    print_char('\n');
}

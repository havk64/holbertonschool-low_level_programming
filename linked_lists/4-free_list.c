#include "list.h"

/*
 * This function deallocate a linked list. *
 */
void free_list(List *list)
{
    List *node;
    List *tmp;

    node = list;
    while(node != NULL) {
	free(node->str); /* Free the str. */
	tmp = node->next;/* Saves the ptr.*/
	free(node); /*	Free the node	  */
	node = tmp; /* Gets the next ptr. */
    }
}

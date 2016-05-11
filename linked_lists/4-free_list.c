#include "list.h"

void free_list(List *list)
{
    List *node;
    List *tmp;

    node = list;
    while(node != NULL) {
	free(node->str);
	tmp = node->next;
	free(node);
	node = tmp;
    }
}

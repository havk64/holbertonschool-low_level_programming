#include "header.h"

void free_cl_list(List * list) {
    List * head = list;
    List * node = list;

    if (list == NULL) return;

    while (list->next != head) {
	node = list;
	list = list->next;
	free(node->str);
	free(node);
    }
    free(list->str);
    free(list);
}

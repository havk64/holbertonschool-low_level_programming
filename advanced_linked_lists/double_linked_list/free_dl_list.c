#include "header.h"

void free_dl_list(List *list)
{
    if (list == NULL) return;
    while (list->next != NULL) {
	list = list->next;
	free(list->prev->str);
	free(list->prev);
    }
    free(list->str);
    free(list);
}

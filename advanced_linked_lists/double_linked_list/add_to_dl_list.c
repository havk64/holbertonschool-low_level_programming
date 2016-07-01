#include "header.h"
#include "list.h"

int add_end_dl_list(List **list, char *str)
{
    List * node, * tail;

    node = malloc(sizeof(List));
    if(node == NULL) return (1);

    node->str = strdup(str);
    node->next = NULL;

    if(*list == NULL) {
        node->prev = NULL;
        *list = node;
    } else {
        tail = *list;
        while(tail->next != NULL) {
            tail = tail->next;
        }
	node->prev = tail;
	tail->next = node;
    }
    return (0);
}

int add_begin_dl_list(List **list, char *str)
{
    List * node;
    if (list == NULL) return 1;
    node = malloc(sizeof(List));
    if(node == NULL) return (1);

    node->str = strdup(str);
    node->prev = NULL;

    if(*list == NULL) {
        node->next = NULL;
        *list = node;
    } else {
        node->next = *list;
        (*list)->prev = node;
        *list = node;
    }
    return (0);
}

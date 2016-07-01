#include "header.h"

int add_end_cl_list(List ** list, char * str)
{
    List * node;
    List * tail = *list;
    
    node = malloc( sizeof (List) );
    if (node == NULL)  return (1);

    node->str = strdup(str);

    if ( node -> str == NULL) return (1);

    if (*list == NULL) { 
	*list = node;
	node->next = node;
    } else { 
	while(tail->next != *list) {
	    tail = tail->next;
	}
	tail->next = node;
	node->next = *list;
    }
    return 0;
}

int add_begin_cl_list(List ** list, char * str)
{
    List * node;
    List * head = *list;

    if (list == NULL) return 1;
    node = (List *) malloc(sizeof(List));

    if (node == NULL) return 1;
    node->str = strdup(str);

    if (*list == NULL) {
	node->next = node;
	*list = node;
    } else {
	while (head->next != *list) {
	    head = head->next;
	}
	node->next = head->next;
	head->next = node;
	*list = node;
    }
    return 0;
}

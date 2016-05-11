#include "list.h"

void print_list(List *list)
{
    List *node;
    node = list;
    while(node != NULL) {
	print(node->str);
	if(node->next != NULL) {
	    print_char(',');
	    print_char(' ');
	}
	node = node->next;
    }
    print_char('\n');
}

#include <stdlib.h>
#include "list.h"

/* ===================================================	*
 * Allocates a new node to a linked list and links it	*
 * to the end of the list.				*
 * ===================================================	*/
int add_node(List **list, char *content)
{    
    int len, i;
    char *s;
    List *p, *node;
    len = 0;

    node = malloc(sizeof(List));
    if(node == NULL) return (1);

    while(content[len])
        len++;

    s = malloc(sizeof(char) * (len + 1));
    if( s == NULL) return (1);

    for(i = 0; i < len; i++)
        s[i] = content[i];
    s[i] = 0;

    node->str = s;
    node->next = NULL;

    if(*list == NULL) {
	*list = node;
    } else {
	p = *list;
	while(p->next != NULL)
	    p = p->next;
	p->next = node;
    }
    return (0);
}

List *params_to_list(int ac, char **av)
{
    int i = 0;
    List *node = NULL;

    while(i < ac) {
	if(add_node(&node, av[i]) == 1 ) return NULL;
	i++;
    }

    return node;
}

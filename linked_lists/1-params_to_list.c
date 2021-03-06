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
    List *actual, *node;
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

    actual = *list;
    while(actual != NULL && actual->next != NULL)
	actual = actual->next;

    return (0);
}

/* ===================================================  *
 * Creates a new list from the command line arguments	*
 * ===================================================  */
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

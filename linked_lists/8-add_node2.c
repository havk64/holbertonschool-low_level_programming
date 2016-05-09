#include <stdlib.h>
#include "list.h"
#include <stdio.h>

int add_node(List **list, char *content)
{    
    int len, i;
    char *s;
    List *p, *node;
    len = 0;

    node = malloc(sizeof(List));
    if(node == NULL) return (1);
    printf("Node in add_node is: %p, and the list is: %p\n",(void *) node, (void *)list);

    while(content[len])
        len++;

    s = malloc(sizeof(char) * (len + 1));
    if( s == NULL) return (1);

    for(i = 0; i < len; i++)
        s[i] = content[i];
    s[i] = 0;

    node->str = s;
    node->next = NULL;
    p = *list;
    if(p == NULL) {
	*list = p;
	return 0;
    }
    
    while(p != NULL) p = p->next;
    p->next = node;

    printf("The value of list is: %p\n",(void *)  list);
    printf("Node->str is: %s, node->next is: %p\n", node->str, (void *)node->next);
    return (0);
}

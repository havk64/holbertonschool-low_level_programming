#include "list.h"
#include <stdlib.h>

int add_node(List **list, char *content)
{
    int len, i;
    char *s;
    List *node;
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
    node->next = *list;
    *list = node;

    return (0);
}

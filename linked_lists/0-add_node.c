#include "list.h"
#include <stdlib.h>

/* ================================================== *
 * Allocates a new node to a linked list and links it.*
 * ================================================== */
int add_node(List **list, char *content)
{
    int len, i;
    char *s;
    List *node;
    len = 0;

    node = malloc(sizeof(List));
    if(node == NULL) return (1);

    while(content[len]) /* String counter.	*/
	len++;

    s = malloc(sizeof(char) * (len + 1));
    if( s == NULL) return (1);

    for(i = 0; i < len; i++) /* String copy.	*/
	s[i] = content[i];
    s[i] = 0;

    node->str = s;	/* Initializing members */
    node->next = *list;
    *list = node;	/* Linking to next mem. */

    return (0);
}

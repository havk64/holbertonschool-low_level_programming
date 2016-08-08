#include "head.h"
/*
 * This function that enqueue an element in a list.
 */
int push_queue(Queue **queue, char *str)
{
	Queue *node;
	node = *queue;

	if (node != NULL) {
		while (node->next != NULL) {
			node = node->next;
		}
		node->next = malloc(sizeof(Queue));
		node = node->next;
	} else {
		node = malloc(sizeof(Queue));
		*queue = node;
	}
	node->next = NULL;
	node->str = strdup(str);
	return (0);
}




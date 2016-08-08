#include "head.h"
/*
 * This function that enqueue an element in a list.
 * /
int push_queue(Queue **queue, char *str)
{
	Queue *node;
	node = *queue;

	if (queue != NULL) {
		while (node->next != NULL) {
			node = node->next;
		}
		node->next = (Queue *) malloc(sizeof(Queue));
		if (node->next == NULL)
			return (1);
		node = node->next;
	} else {
		node = (Queue *) malloc(sizeof(Queue));
		if (node->next == NULL)
			return (1);
		*queue = node;
	}
	node->next = NULL;
	node->str = strdup(str);
	return (0);
}




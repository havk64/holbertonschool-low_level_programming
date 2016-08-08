#include "head.h"
/*
 * This function returns a copy of the  data of the first element
 */
char *pop_queue(Queue **queue)
{
	char *data;
	Queue *node;

	if (*queue == NULL)
		return NULL;
	data = strdup((*queue)->str);
	node = *queue;
	*queue = (*queue)->next;
	free(node->str);
	free(node);
	return data;
}

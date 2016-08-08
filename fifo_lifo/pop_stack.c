#include "head.h"
/*
 * This function pops an element from a Stack
 */
char *pop_stack(Stack **stack)
{
	Stack *node;
	char *data;

	if (stack == NULL || *stack == NULL)
		return NULL;
	node = *stack;
	data = node->str;
	*stack = node->next;
	free(node);
	return data;
}

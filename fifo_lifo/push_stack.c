#include "head.h"
/*
 * This function pushes an element on the top of a Stack
 */
int push_stack(Stack **stack, char *str)
{
        Stack *node;

        node = malloc(sizeof(Stack));
        if (node == NULL)
                return(1);
        node->str = strdup(str);
	node->next = (*stack == NULL) ? NULL : *stack;
        *stack = node;
        return(0);
}

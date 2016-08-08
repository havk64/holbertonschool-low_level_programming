#include "head.h"

int push_stack(Stack **stack, char *str)
{
        Stack *node;

        node = malloc(sizeof(Stack));
        if (node == NULL)
                return(1);
        node->str = strdup(str);
        if (*stack == NULL)
                node->next = NULL;
        else
                node->next = *stack;
        *stack = node;
        return(0);
}

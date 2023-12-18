#include "monty.h"

/**
 * free_stack - it is a frees a stack_t list
 * @stack: it is a pointer to the top of the stack
 */
void free_stack(stack_t *stack)
{
	stack_t *current;

	while (stack != NULL)
	{
		current = stack;
		stack = stack->next;
		free(current);
	}
}

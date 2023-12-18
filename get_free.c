#include "monty.h"

/**
 *  get_free - it free the stack, 
 *
 *  @stack: a pointer to the stack, 
 *
 *  Return: Void will return. 
 */


void get_free(stack_t *stack)
{
	if (stack)
	{
		get_free(stack->next);
		free(stack);
	}
}

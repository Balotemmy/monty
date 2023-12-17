#include "monty.h"

/**
 * get_rotl - the function that rotates the tail to the top, 
 * @stack: a pointer to the top of the stack, 
 * @line_number: line where the number appears, 
 * Description: 13. rotl, 
 * Return: return either,
 * 1. upon success, nothing, 
 * 2. upon failure, EXIT_FAILURE. 
 */
void get_rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *first, *last;

	(void)line_number;

	if ((*stack == NULL) || ((*stack)->next == NULL))
	{
		;
	}
	else
	{
		first = last = *stack;
		while (last->next)
		{
			last = last->next;
		}
		*stack = first->next;
		last->next = first;
		first->prev = last;
		first->next = NULL;
		(*stack)->prev = NULL;
	}
}

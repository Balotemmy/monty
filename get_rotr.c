#include "monty.h"

/**
 *  get_rotr - it rotate the right, 
 *
 *  @stack: the stack, 
 *
 *  @line_number: Line where the number will appear, 
 *
 *  Return: Void will return. 
 */
void get_rotr(stack_t **stack, unsigned int line_number)
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
		last->prev->next = NULL;
		last->prev = NULL;
		last->next = first;
		first->prev = last;
		*stack = last;
	}
}

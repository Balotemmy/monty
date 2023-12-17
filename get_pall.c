#include "monty.h"

/**
 * get_pall - the function that prints all elements on the stack, 
 * @stack: a pointer to head of the stack, 
 * @line_number: line where number appears, 
 * Description: 0. push, pall, 
 * Return: return either,
 * 1. upon success, nothing, 
 * 2. upon failure, EXIT_FAILURE. 
 */
void get_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current;

	(void)line_number;

	current = *stack;

	while (current != NULL)
	{
		printf("%d", current->n);
		current = current->next;
		printf("\n");
	}
}

#include "monty.h"

/**
 * get_mul - the function that multiplies the top two elements of the stack, 
 * @stack: a pointer to the top of the stack, 
 * @line_number: line where the number appears, 
 * Description: 8. multi, 
 * Return: return either,
 * 1. upon success, nothing, 
 * 2. upon failure, EXIT_FAILURE. 
 */
void get_mul(stack_t **stack, unsigned int line_number)
{
	stack_t *first, *second;

	if ((*stack == NULL) || ((*stack)->next == NULL))
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		fclose(file);
		exit(EXIT_FAILURE);
	}
	else
	{
		first = *stack;
		second = first->next;
		second->n *= first->n;
		*stack = second;
		(*stack)->prev = NULL;
		free(first);
	}
}

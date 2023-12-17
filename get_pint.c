#include "monty.h"

/**
 * get_pint - the function that prints the top element on the stack, 
 * @stack: a pointer to head of the stack, 
 * @line_number: line where the number appears, 
 * Description: 1. pint, 
 * Return: return either,
 * 1. upon success, nothing, 
 * 2. upon failure, EXIT_FAILURE. 
 */
void get_pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		fclose(file);
		get_free(*stack);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}

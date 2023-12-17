#include "monty.h"

/**
 * get_pchar - the function that prints the char at the top of the stack, 
 * @stack: a pointer to head of the stack, 
 * @line_number: line where number appears, 
 * Description: 11. pchar, 
 * Return: return either,
 * 1. upon success, nothing, 
 * 2. upon failure, EXIT_FAILURE. 
 */
void get_pchar(stack_t **stack, unsigned int line_number)
{
	if ((stack == NULL) || ((*stack) == NULL))
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		fclose(file);
		get_free(*stack);
		exit(EXIT_FAILURE);
	}
	if (!(isascii((*stack)->n)))
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		fclose(file);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", (*stack)->n);
}

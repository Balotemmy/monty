#include "monty.h"

/**
 * op_nop - it does nothing
 * @stack: it is a pointer to the top of the stack
 * @line_number: line number of the opcode
 **/
void op_nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}

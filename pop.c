#include "monty.h"
/**
 * pop - Something usefull
 * @stack: Something more usefull
 * @line_number: Something more usefull
 *
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (*stack != NULL && stack != NULL)
	{
		temp = *stack;
		*stack = (*stack)->next;
		free(temp);
		return;
	}
	else
	{
		dprintf(STDERR_FILENO, "L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
}

#include "monty.h"
/**
 * add - Something usefull
 * @stack: Something more usefull
 * @line_number: Something more usefull
 *
 */
void add(stack_t **stack, unsigned int line_number)
{
	int i = 0;
	stack_t *temp;

	if (*stack != NULL && (*stack)->next != NULL)
	{
		temp = (*stack)->next;
		i += (*stack)->n;
		i += temp->n;
		free(*stack);
		temp->n = i;
		*stack = temp;
	}
	else
	{
		dprintf(STDERR_FILENO, "L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
}

#include "monty.h"
/**
 * swap - Something usefull
 * @stack: Something more usefull
 * @line_number: Something more usefull
 *
 */
void swap(stack_t **stack, unsigned int line_number)
{
	int i, l;
	stack_t *temp = *stack;

	if (*stack != NULL && (*stack)->next != NULL)
	{
		i = temp->n;
		temp = temp->next;
		l = temp->n;
		temp->n = i;
		temp = temp->prev;
		temp->n = l;
		*stack = temp;
	}
	else
	{
		dprintf(STDERR_FILENO, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
}

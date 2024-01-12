#include "main.h"
/**
 * free_stack - frees the stack on exit
 * @status: exit status
 * @arg: double pointer to the stack
 *
 * Return: void
 */
void free_stack(char **argv, int status)
{
	stack_t **stack;
	stack_t *next;

	stack = (stack_t** )arg;
	
	if (*stack)
	{
		(*stack)->prev->next = NULL;
		(*stack)->prev = NULL;
	}
	while (*stack != NULL)
	{
		next = (*stack)->next;
		free(*stack);
		*stack = next;
	}
	var.stack_len = 0;
}

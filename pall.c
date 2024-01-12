#include "monty.h"

/**
 * pall - print all values on `stack' starting from the top
 * @stack: double pointer to head of stack
 * @line_number: line number being executed from script file
 *
 * Return: void
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *head;
	int i = 0;

	(void)(line_number);

	head = *stack;
	while (head != NULL)
	{
		if (head == *stack)
		{
			printf("%d\n", head->n);
		}
		head = head->next;
		i++;
	}
}

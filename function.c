#include "monty.h"
/**
 * convert - Something usefull
 * @op: Something more usefull
 *
 * Return: Something much more usefull
 */
int convert(char *op)
{
	unsigned int a = 0;

	if (op == NULL)
	{
		return (0);
	}
	while (op[a])
	{
		if (op[a] == '-' && a == 0)
		{
			a++;
			continue;
		}
		if (!isdigit(op[a]))
		{
			return (0);
		}
		a++;
	}
	return (1);
}
/**
 * delete - Something usefull
 * @stack: Something more usefull
 *
 */
void delete(stack_t *stack)
{
	stack_t *temp;

	while (stack != NULL)
	{
		temp = stack->next;
		free(stack);
		stack = temp;
	}
}

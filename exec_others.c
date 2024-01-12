#include "monty.h"
/**
 * exec_others - Something useful
 * @line_number: Something more useful
 * @op: Something more useful
 * @stack: Something more useful
 *
 * Return: Something much more usefull
 */
int exec_others(stack_t **stack, char *op, unsigned int line_number)
{
	int i = 0;
	instruction_t command[] = {
								{"pall", pall},
								{"pint", pint},
								{"pop", pop},
								{"swap", swap},
								{"add", add},
								{"nop", nop},
								{NULL, NULL}
	};

	while (command[i].opcode != NULL)
	{
		if (strcmp(command[i].opcode, op) == 0)
		{
			command[i].f(stack, line_number);
			break;
		}
		i++;
	}
	if (command[i].opcode == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: unknown instruction %s\n", line_number, op);
		return (1);
	}
	return (0);
}

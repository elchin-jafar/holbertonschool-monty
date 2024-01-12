#include "main.h"
/**
 * get_op - gets appropiate function for given opcodes
 * @line_number: Something more useful
 * @op: opcode
 * @stack: Something more useful
 * Return: appropiate function
 */
void get_op(char *op, stack_t **stack, unsigned int line_number)
{
	int i = 0;
	instruction_t command[] =
	{
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{NULL, NULL},
	};
	while (command[i].opcode != NULL)
	{
		if (!strcmp(command[i].opcode, op))
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

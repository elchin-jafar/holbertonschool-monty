#include "main.h"
/**
 * get_op - gets appropiate function for given opcodes
 *
 * @opcodes: opcode
 * Return: appropiate function
 */
void get_op(char *opcode, stack_t **stack, unsigned int line_number)
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
		if (!strcmp(command[i].opcode, opcodes))
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
}

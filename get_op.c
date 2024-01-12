#include "main.h"
/**
 * get_op - gets appropiate function for given opcodes
 *
 * @opcodes: opcode
 * Return: appropiate function
 */
void get_op(char *opcode, stack_t **stack, unsigned int line_number)
{
	int i;
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
	for (i = 0; command[i].opcode != NULL; i++)
	{
		if (!strcmp(command[i].opcode, opcodes))
		{
			command[i].f(stack, line_number);
			return;
		}
	}
	dprintf(STDOUT_FILENO,
		"L%u: unknown instruction %s\n",
		line_number, op);
	exit(EXIT_FAILURE);
}

#include "main.h"
/**
 * execute - Something useful
 * @file: Something more useful
 * @stack: Something more useful
 *
 * Return: Something much more usefull
 */
int execute(FILE *file, stack_t **stack)
{
	char *buf = NULL, *tok = NULL;
	size_t size = 0;
	int line_count = 0, i = 0;

	while (getline(&buf, &size, file) != -1 && i != 1)
	{
		line_count++;
		tok = strtok(buf, " \n\t\r$");
		if (tok == NULL || *tok == '#')
		{
			continue;
		}
		if (strcmp(tok, "push") == 0)
		{
			tok = strtok(NULL, " \n\t\r$");
			i = push(stack, tok, line_count);
		}
		else
		{
			i = get_op(stack, tok, line_count);
		}
	}
	free(buf);
	return (i);
}

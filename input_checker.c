#include "main.h"

/**
 * input_checker - checks if inputs are valid or not
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: file pointer
 */

FILE *input_checker(int argc, char **argv)
{
	FILE *fp;

	if (argc != 2)
	{
		dprintf(2, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fp = fopen(argv[1], "r");
	if (!fp)
	{
		dprintf(2, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	return (fp);
}

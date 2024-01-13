#include "monty.h"

/**
 * push - push an integer onto the stack
 * @stack: double pointer to the beginning of the stack
 * @line_number: script line number
 *
 * Return: 0
 */

int push(stack_t **stack, char *op, unsigned int line_number)
{
    stack_t *new;

    new = malloc(sizeof(stack_t));
    if (new == NULL)
    {
        dprintf(STDERR_FILENO, "Error: malloc failed\n");
        return (1);
    }
    if (convert(op) == 1 && op != NULL)
    {
        new->n = atoi(op);
        new->prev = NULL;
        new->next = *stack;
        if (*stack != NULL)
        {
            (*stack)->prev = new;
        }
        *stack = new;
    }
    else
    {
        dprintf(STDERR_FILENO, "L%u: usage: push integer\n", line_number);
        free(new);
        return (1);
    }
    return (0);
}

#include "monty.h"

/**
 * push - pushes node unto a stack
 * @stack: The node to push
 * @line_number: The number of line
 */
void push(stack_t **stack, unsigned int line_number)
{
	int n;

	/* Get the integer to push onto the stack. */
	if (scanf("%d", &n) != 1)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		 exit(EXIT_FAILURE);
	}

	/* Create a new node to store the integer. */
	stack_t *new_node = malloc(sizeof(stack_t));
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *stack;

	/* Update the stack pointer. */
	*stack = new_node;
}

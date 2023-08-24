#include "monty.h"

/**
 * pall - prints values of on the stack
 * @stack: Node
 * @line_number: The number of line
 */
void pall(stack_t **stack, unsigned int line_number)
{
	/* Print all the values on the stack, starting from the top. */
	stack_t *current_node = *stack;
	while (current_node != NULL)
	{
		printf("%d\n", current_node->n);
		current_node = current_node->next;
	}
}

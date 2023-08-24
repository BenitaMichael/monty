#include "monty.h"

/**
* monty_pint - function that prints the top of the stack followed
* by a new line
* @head: pointer to the head pointer in the stack
* @line_counter: line count
* Return: nothing (void)
*/
void monty_pint(stack_t **head, unsigned int line_counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_counter);
		fclose(func.file);
		free(func.content);
		free_function(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}

#include "monty.h"

/**
* monty_pchar - prints the char at the top of the stack
* followed by a new line
* @head: head of the stack
* @line_count: line count
* Return: nothing (void)
*/
void monty_pchar(stack_t **head, unsigned int line_count)
{
	stack_t *ptr;

	ptr = *head;
	if (!ptr)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_count);
		fclose(func.file);
		free(func.content);
		free_function(*head);
		exit(EXIT_FAILURE);
	}
	if (ptr->n > 127 || ptr->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_count);
		fclose(func.file);
		free(func.content);
		free_function(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", ptr->n);
}

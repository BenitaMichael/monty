#include "monty.h"

/**
* monty_pop - function that removes the top element of the stack
* @head: pointer to head pointer
* @line_counter: line count
* Return: nothing (void)
*/
void monty_pop(stack_t **head, unsigned int line_counter)
{
	stack_t *ptr;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_counter);
		fclose(func.file);
		free(func.content);
		free_function(*head);
		exit(EXIT_FAILURE);
	}
	ptr = *head;
	*head = ptr->next;
	free(ptr);
}

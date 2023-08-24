#include "monty.h"

/**
* monty_pint - function that prints the top of the stack followed
* by a new line
* @head: pointer to the head pointer in the stack
* @counter: line count
* Return: nothing (void)
*/
void monty_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(func.file);
		free(func.content);
		free_function(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}

#include "monty.h"

/**
* f_pall - prints all the values on the stack
* starting from the top of the stack
* @head: pointer to head pointer
* @line_count: line count
* Return: nothing (void)
*/
void f_pall(stack_t **head, unsigned int line_count)
{
	stack_t *ptr;
	(void)line_count;

	ptr = *head;
	if (ptr == NULL)
		return;
	while (ptr)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
}

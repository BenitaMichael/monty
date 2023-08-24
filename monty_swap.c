#include "monty.h"

/**
* monty_swap - function that swaps the top two elements of the stack
* @head: head of stack
* @counter: line count
* Return: nothing (void)
*/
void monty_swap(stack_t **head, unsigned int counter)
{
	stack_t *ptr;
	int tmp;
	int count = 0;

	ptr = *head;
	while (ptr)
	{
		ptr = ptr->next;
		count++;
	}
	if (count < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(func.file);
		free(func.content);
		free_function(*head);
		exit(EXIT_FAILURE);
	}
	ptr = *head;
	tmp = ptr->n;
	ptr->n = ptr->next->n;
	ptr->next->n = tmp;
}

#include "monty.h"

/**
* free_function - function that frees a doubly linked list using
 a temp file
* @head: pointer to the first element of the stack
* Return: nothing
*/
void free_function(stack_t *head)
{
	stack_t *tmp;

	tmp = head;
	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}

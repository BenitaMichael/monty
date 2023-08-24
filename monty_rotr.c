#include "monty.h"

/**
* monty_rotr - function that rotates the stack to the bottom
* The last element of the stack becomes the top element of the stack
* @head: head of the stack
* @line_count: line count
* Return: nothing (void)
*/
void monty_rotr(stack_t **head, __attribute__((unused)) unsigned int line_count)
{
	stack_t *dub;

	dub = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (dub->next)
	{
		dub = dub->next;
	}
	dub->next = *head;
	dub->prev->next = NULL;
	dub->prev = NULL;
	(*head)->prev = dub;
	(*head) = dub;
}


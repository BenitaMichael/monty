#include "monty.h"

/**
* add_queue - function that add an element to the end of a queue
* @new: new value
* @head: head of the queue
* Return: nothing (void)
*/
void add_queue(stack_t **head, int new)
{
	stack_t *element;
	stack_t *temp;

	temp = *head;
	element = malloc(sizeof(stack_t));
	if (element == NULL)
	{
		printf("Error\n");
	}
	element->n = new;
	element->next = NULL;
	if (temp)
	{
		while (temp->next)
			temp = temp->next;
	}
	if (!temp)
	{
		*head = element;
		element->prev = NULL;
	}
	else
	{
		temp->next = element;
		element->prev = temp;
	}
}


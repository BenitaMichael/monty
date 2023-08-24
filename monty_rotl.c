#include "monty.h"

/**
* monty_rotl- function that rotates the stack to the top : The top element of the stack
* becomes the last one, and the second top element of the stack becomes the first one
* @head: head of the stack
* @count: line count
* Return: nothing (void)
*/
void monty_rotl(stack_t **head,  __attribute__((unused)) unsigned int count)
{
	stack_t *temp = *head, *aux;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	aux = (*head)->next;
	aux->prev = NULL;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = temp;
	(*head) = aux;
}


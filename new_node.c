#include "monty.h"

/**
* new_node - function that adds a new node to the stack
* @head: head of the stack
* @new: new value
* Return: nothing (void)
*/
void new_node(stack_t **head, int new)
{
	stack_t *tmp;
	stack_t *new_node;

	tmp = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (tmp)
		tmp->prev = new_node;
	new_node->n = new;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}


#include "monty.h"

/**
* monty_pstr - function that prints the string starting at
* the top of the stack followed by a new
* @head: head of stack
* @count: line count
* Return: nothing (void)
*/
void monty_pstr(stack_t **head, unsigned int count)
{
	stack_t *ptr;
	(void)count;

	ptr = *head;
	while (ptr)
	{
		if (ptr->n > 127 || ptr->n <= 0)
		{
			break;
		}
		printf("%c", ptr->n);
		ptr = ptr->next;
	}
	printf("\n");
}


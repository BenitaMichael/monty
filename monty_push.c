#include "monty.h"

/**
* push_function - function that adds node to the
* stack at the end
* @head: double head pointer to the stack
* @counter: line count
* Return: nothing (void)
*/
void push_function(stack_t **head, unsigned int counter)
{
	int a;
	int index = 0, flag = 0;

	if (func.arg)
	{
		if (func.arg[0] == '-')
			index++;
		for (; func.arg[index] != '\0'; index++)
		{
			if (func.arg[index] > 57 || func.arg[index] < 48)
				flag = 1;
		}
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(func.file);
			free(func.content);
			free_function(*head);
			exit(EXIT_FAILURE); }}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(func.file);
		free(func.content);
		free_function(*head);
		exit(EXIT_FAILURE);
	}
	a = atoi(func.arg);
	if (func.lifi == 0)
		new_node(head, a);
	else
		add_queue(head, a);
}

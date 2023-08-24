#include "monty.h"

/**
* monty_add - function that adds the top two elements of the stack
* @head:pointer to head pointer
* @line_counter: line count
* Return: nothing (void)
*/
void monty_add(stack_t **head, unsigned int line_counter)
{
	stack_t *ptr;
	int tmp;
	int len = 0;

	ptr = *head;
	while (ptr)
	{
		ptr = ptr->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_counter);
		fclose(func.file);
		free(func.content);
		free_function(*head);
		exit(EXIT_FAILURE);
	}
	ptr = *head;
	tmp = ptr->n + ptr->next->n;
	ptr->next->n = tmp;
	*head = ptr->next;
	free(ptr);
}


/**
* monty_sub - function that substracts the top element of the stack from the
* second top element of the stack
* @head: pointer to the head pointer
* @line_counter: line count
* Return: nothing(void)
*/
void monty_sub(stack_t **head, unsigned int line_counter)
{
	stack_t *tmp;
	int num;
	int sub;

	tmp = *head;
	for (num = 0; tmp != NULL; num++)
		tmp = tmp->next;
	if (num < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_counter);
		fclose(func.file);
		free(func.content);
		free_function(*head);
		exit(EXIT_FAILURE);
	}
	tmp = *head;
	sub = tmp->next->n - tmp->n;
	tmp->next->n = sub;
	*head = tmp->next;
	free(tmp);
}


/**
* monty_div - function that divides the top two elements of
* the stack
* @head: double head pointer to the stack
* @line_counter: line count
* Return: nothing
*/
void monty_div(stack_t **head, unsigned int line_counter)
{
	stack_t *ptr;
	int tmp;
	int len = 0;

	ptr = *head;
	while (ptr)
	{
		ptr = ptr->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_counter);
		fclose(func.file);
		free(func.content);
		free_function(*head);
		exit(EXIT_FAILURE);
	}
	ptr = *head;
	if (ptr->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_counter);
		fclose(func.file);
		free(func.content);
		free_function(*head);
		exit(EXIT_FAILURE);
	}
	tmp = ptr->next->n / ptr->n;
	ptr->next->n = tmp;
	*head = ptr->next;
	free(ptr);
}


/**
* monty_mul - function that multiplies the top two elements of
* the stack
* @head: double head pointer to the stack
* @line_counter: line count
* Return: nothing (void)
*/
void monty_mul(stack_t **head, unsigned int line_counter)
{
	stack_t *ptr;
	int tmp;
	int len = 0;

	ptr = *head;
	while (ptr)
	{
		ptr = ptr->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_counter);
		fclose(func.file);
		free(func.content);
		free_function(*head);
		exit(EXIT_FAILURE);
	}
	ptr = *head;
	tmp = ptr->next->n * ptr->n;
	ptr->next->n = tmp;
	*head = ptr->next;
	free(ptr);
}


/**
* monty_mod - function that computes the remainder of the division
* of the second top element of the stack by the top element of the stack
* @head: double head pointer to the stack
* @line_counter: line count
* Return: nothing (void)
*/
void monty_mod(stack_t **head, unsigned int line_counter)
{
	stack_t *ptr;
	int tmp;
	int len = 0;

	ptr = *head;
	while (ptr)
	{
		ptr = ptr->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_counter);
		fclose(func.file);
		free(func.content);
		free_function(*head);
		exit(EXIT_FAILURE);
	}
	ptr = *head;
	if (ptr->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_counter);
		fclose(func.file);
		free(func.content);
		free_function(*head);
		exit(EXIT_FAILURE);
	}
	tmp = ptr->next->n % ptr->n;
	ptr->next->n = tmp;
	*head = ptr->next;
	free(ptr);
}


#include "monty.h"

/**
* exec - function that executes all monty functions
* @stack: head stack
* @counter: line count
* @file: pointer to monty file stream
* @content: line content
* Return: nothing (void)
*/
int exec(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t opt[] = {
				{"push", push_function},
				{"pint", monty_pint},
				{"pop", monty_pop},
				{"swap", monty_swap},
				{"add", monty_add},
				{"nop", monty_nop},
				{"sub", monty_sub},
				{"div", monty_div},
				{"mul", monty_mul},
				{"mod", monty_mod},
				{NULL, NULL}
				};
	char *operation;
	unsigned int i = 0;

	operation = strtok(content, " \n\t");
	if (operation && operation[0] == '#')
		return (0);
	func.arg = strtok(NULL, " \n\t");
	while (opt[i].opcode && operation)
	{
		if (strcmp(operation, opt[i].opcode) == 0)
		{	opt[i].f(stack, counter);
			return (0);
		}
		i++;
	}
	if (operation && opt[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, operation);
		fclose(file);
		free(content);
		free_function(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}


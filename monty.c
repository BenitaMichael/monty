#include "monty.h"
#include <stdlib.h>
#include <stdio.h>

func_t func = {NULL, NULL, 0, NULL};

/**
* main - function for monty interpreter
* @argc: argument count
* @argv: argument value
* Return: returns (0) on success
*/
int main(int argc, char *argv[])
{
	char *content;
	FILE *file;
	unsigned int count = 0;
	size_t size = 0;
	ssize_t read_line = 1;
	stack_t *stack = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	func.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (read_line > 0)
	{
		content = NULL;
		read_line = getline(&content, &size, file);
		func.content = content;
		count++;
		if (read_line > 0)
		{
			exec(content, &stack, count, file);
		}
		free(content);
	}
	free_function(stack);
	fclose(file);
return (0);
}

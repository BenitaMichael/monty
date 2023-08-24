#ifndef MONTY_H
#define MONTY_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <fcntl.h>
#include <ctype.h>

/**
* struct stack_s - doubly linked list representation of a stack (or queue)
* @n: integer
* @prev: points to the previous element of the stack (or queue)
* @next: points to the next element of the stack (or queue)
*
* Description: doubly linked list node structure
* for stack, queues, LIFO, FIFO
*/
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;


/**
* struct instruction_s - opcode and its function
* @opcode: the opcode
* @f: function to handle the opcode
*
* Description: opcode and its function
* for stack, queues, LIFO, FIFO
*/
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
* struct func_t -structure containing variables -args, 
* file, line content
* @arg: value
* @file: pointer to monty file
* @content: file content
* @lifi: flag change stack <-> queue
* Description: carries values for each function in the program
*/
typedef struct func_t
{
	char *arg;
	FILE *file;
	int lifi;
	char *content;
}  func_t;
extern func_t func;

/*Task 0*/
void push_function(stack_t **head, unsigned int line_count);
void pall_function(stack_t **head, unsigned int line_count);

/*Task 1*/
void monty_pint(stack_t **head, unsigned int line_counter);


/*Task 2*/
void monty_pop(stack_t **head, unsigned int line_counter);

/*Task 3*/
void monty_swap(stack_t **head, unsigned int line_counter);

/*Task 4*/
void monty_add(stack_t **head, unsigned int line_counter);

/*Task 5*/
void monty_nop(stack_t **head, unsigned int line_counter);

/*Task 6*/
void monty_sub(stack_t **head, unsigned int line_counter);

/*Task 7*/
void monty_div(stack_t **head, unsigned int line_counter);

/*Task 8*/
void monty_mul(stack_t **head, unsigned int line_counter);

/*Task 9*/
void monty_mod(stack_t **head, unsigned int line_counter);

/*Task 11*/
void monty_pchar(stack_t **head, unsigned int line_count);

/*Task 12*/
void monty_pstr(stack_t **head, unsigned int line_count);

/*Task 13*/
void monty_rotl(stack_t **head,  __attribute__((unused)) unsigned int line_count);

/*Task 14*/
void monty_rotr(stack_t **head, __attribute__((unused)) unsigned int line_count);

/*Task 15*/
void monty_queue(stack_t **head, unsigned int line_count);
void monty_stack(stack_t **head, unsigned int line_count);

void add_queue(stack_t **head, int new);
/*frees the stack*/
void free_function(stack_t *head);
void new_node(stack_t **head, int new);

/*Executes the opcodes*/
int exec(char *content, stack_t **stack, unsigned int line_counter, FILE *file);

#endif

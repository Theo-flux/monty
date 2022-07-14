#ifndef MONTY_H
#define MONTY_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
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

extern stack_t *head;

/*function to get opcode type*/
void (*get_opcode(char *s))(stack_t **stack, unsigned int line_no);

    /*stk_opecode functions*/
void stk_push(stack_t **stack, unsigned int line_number);
void stk_pall(stack_t **stack, unsigned int line_number);

/*stack.func.c*/
stack_t add_to_stack(stack_t **head, int data);
void print_stack(stack_t **head);

/*helpers*/
int countline(char *text, int *count);
#endif

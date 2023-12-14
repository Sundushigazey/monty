#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
int n;
struct stack_s *prev;
struct stack_s *next;
} stack_t;

/**
 * struct bus_s - variables -args, file, line content
 * @arg: value
 * @file: pointer to monty file
 * @content: line content
 * @lifi: flag change stack <-> queue
 * Description: carries values through the program
 */
typedef struct bus_s
{
char *arg;
FILE *file;
char *content;
int lifi;
} bus_t;

/* Global variable declaration */
extern bus_t bus;

/* Function declarations */
void add_head(stack_t **h, int l);
void _emptys(stack_t *top);
void _pall(stack_t **top, unsigned int aux);
void p_stack(stack_t *top);
void _push(stack_t **top, unsigned int count_line);
void _qu(stack_t **top, unsigned int num);
void _addqu(stack_t **top, int t);
int main(int ac, char *av[]);

#endif /* MONTY_H */

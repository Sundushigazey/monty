#include "monty.h"
/**
 * _qu - print top of q
 * @top: head of list
 * @num: counter for line n
 * Return: no
*/
void _qu(stack_t **top, unsigned int num)
{
(void)top;
(void)num;
bus.lifi = 1;
}

/**
 * _addqu - adds at end tail
 * @t: value to  add
 * @top: head
 * Return: no return
*/
void _addqu(stack_t **top, int t)
{
stack_t *n_add, *coun;
coun = *top;
n_add = malloc(sizeof(stack_t));
if (n_add == NULL)
{
printf("Error\n");
}
n_add->t = t;
n_add->next = NULL;
if (coun)
{
while (coun->next)
coun = coun->next;
}
if (!coun)
{
*top = n_add;
n_add->prev = NULL;
}
else
{
coun->next = n_add;
n_add->prev = coun;
}
}

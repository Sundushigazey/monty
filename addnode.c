#include "monty.h"
/**
 * add_head - adds node
 * @h: head of the stack
 * @n: the added new val
 * Return: 0
*/
void add_head(stack_t **h, int l)
{
stack_t *add_new, *temp;
temp = *h;
add_new = malloc(sizeof(stack_t));
if (add_new == NULL)
{
printf("Error\n");
exit(0);
}
if (temp)
temp->prev = add_new;
add_new->l = l;
add_new->next = *h;
add_new->prev = NULL;
*h = add_new;
}

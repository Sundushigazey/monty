#include "monty.h"
/**
* _emptys - empty the d linked list
* @top: the head of the list
*/
void _emptys(stack_t *top)
{
stack_t *t;
t = top;
while (top)
{
t = top->next;
free(top);
top = t;
}
}

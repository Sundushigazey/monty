#include "monty.h"
/**
 * p_stack - prints  stack
 * @top: head of the stk
*/
void p_stack(stack_t *top)
{
    while (top != NULL) {
        printf("%d\n", top->n);
        top = top->next;
    }
}

#include "monty.h"
/**
 * _pall - prints all elemnt of stack
 * @top: head of the stk
 * @aux: unused counter
 * Return: no return
*/
void _pall(stack_t **top, unsigned int aux)
{
	stack_t *tm;
	(void)aux;

	tm = *top;
	if (tm == NULL)
		return;
	while (tm)
	{
		printf("%d\n", tm->n);
		tm = tm->next;
	}
}

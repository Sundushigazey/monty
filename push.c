#include "monty.h"
/**
 * _push - add new node at top of stk
 * @top: head of th list
 * @count_line: to count num line
*/
void _push(stack_t **top, unsigned int count_line)
{
if (!bus.arg)
{
fprintf(stderr, "L%d: usage: push integer\n", count_line);
fclose(bus.file);
free(bus.content);
_emptys(*top);
exit(EXIT_FAILURE);
}
int l = atoi(bus.arg);
add_head(top, l);
}

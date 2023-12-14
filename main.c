#include "monty.h"
/**
 * main - iterp of monty code
 * @ac: arguments counter
 * @av: location
 * Return: 0
 */
int main(int ac, char *av[])
{
char *in_co;
FILE *loc;
size_t vol = 0;
ssize_t l_rd = 1;
stack_t *s1 = NULL;
unsigned int li_co = 0;
if (ac != 2)
{
fprintf(stderr, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}
loc = fopen(av[1], "r");
bus.loc = loc;
if (!loc)
{
fprintf(stderr, "Error: Can't open file %s\n", av[1]);
exit(EXIT_FAILURE);
}
while (l_rd > 0)
{
in_co = NULL;
l_rd = getline(&in_co, &vol, loc);
bus.in_co = in_co;
li_co++;
if (l_rd > 0)
{
execute(in_co, &s1, li_co, loc);
}
free(in_co);
}
_emptys(s1);
fclose(loc);
return (0);
}

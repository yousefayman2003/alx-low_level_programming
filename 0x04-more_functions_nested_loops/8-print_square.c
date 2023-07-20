#include "main.h"

/**
 * Description: print_square - print a line of "#" with length n
 *
 * @size: the length of the line
 */

void print_square(int size)
{
int i, n;
for (n = 0; n < size; n++)
{
for (i = 0; i < size; i++)
{
_putchar('#');
}
_putchar('\n');
}
if (size <= 0)
_putchar('\n');
}


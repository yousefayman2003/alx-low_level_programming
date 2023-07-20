#include "main.h"

/**
 * Description: print_diagonal - print a left diagonal using "\" with length n
 *
 * @n: the length of the diagonal
*/

void print_diagonal(int n)
{
int i, j;
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
if (n <= 0)
_putchar('\n');
}

#include "main.h"

/**
 * Description: print_line - print a line using "_" with length n
 *
 * Input:
 *     @n:  the number of times to print _
 */

void print_line(int n)
{
	int c;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (c = 1; c <= n; c++)
			_putchar('_');
		_puthcar('\n');
	}
}

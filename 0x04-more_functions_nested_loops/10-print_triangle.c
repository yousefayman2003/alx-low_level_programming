#include "main.h"

/**
 * Description: print_triangle - draw a triangle using "#" with n rows
 *
 * @size: the number of rows and "#"
*/

void print_triangle(int size)
{
	int high, base;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (high = 1; high <= size; high++)
		{
			for (base = 1; base <= size; base++)
			{
				if ((high + base) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}

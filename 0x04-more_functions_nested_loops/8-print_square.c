#include "main.h"

/**
 * Description: print_square - print a line of "#" with length n
 *
 * @size: the length of the line
 */

void print_square(int size)
{
	int row, column;

	for (row = 1; row <= size; row++)
	{
		for (column = 1; column <= size; column++)
			_putchar('#');
		_puthchar('\n');
	}

}

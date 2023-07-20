#include "main.h"

/**
 * Description: print_most_numbers - print numbers from 0 to 9 except 2 and 4
 */

void print_most_numbers(void)
{
	int i;

	for (num = 0; num <= 9; num++)
	{
		if (num == 2 || num == 4)
			continue;
		_putchar(num + 48);
	}
	_putchar('\n');
}

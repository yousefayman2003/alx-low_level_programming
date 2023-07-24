#include "main.h"

/**
 *  print_rev - prints the reverse of a string
 *
 *  @s : pointer input
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

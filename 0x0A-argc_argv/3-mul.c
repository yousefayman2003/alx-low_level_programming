#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * Description: main - multiplies two numbers
 * Input:
 *	@argc: [int] --> argument count
 *	@argv: [char pointer to pointer] --> argument vector
 * Return: 0 if two arguments are passed into main
 *	1 otherwise
 */

int main(int argc, char *argv[])
{
	int ans;

	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (1);
	}

	ans = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", ans);
	return (0);
}

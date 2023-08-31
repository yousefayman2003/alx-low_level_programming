#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: number
*/
void print_binary(unsigned long int n)
{
	int size = sizeof(n) * 8, flag = 0;

	while (size)
	{
		if (n & 1L << --size)
		{
			_putchar('1');
			flag++;
		}
		else if (flag)
			_putchar('0');
	}
	if (!flag)
		_putchar('0');
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints a number
 *
 * Return: Always 0 if success else fail
*/
int main(void)
{
	int n = 0;

	while (n != 10)
	{
		putchar(n + 48);
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}

		n++;
	}
	putchar('\n');

	return (0);
}

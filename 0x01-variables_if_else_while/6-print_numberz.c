#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints numbers
 *
 * Return: Always 0 if success else fail
*/
int main(void)
{
	int n = 0;

	while (n != 10)
	{
		putchar(n + '0');
		n++;
	}
	putchar('\n');

	return (0);
}

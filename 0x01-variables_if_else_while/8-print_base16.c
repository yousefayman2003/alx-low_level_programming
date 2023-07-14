#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints a string with printf function
 *
 * Return: Always 0 if success else fail
*/
int main(void)
{
	int n = 0;

	while (n != 16)
	{
		printf("%x", n);
		n++;
	}
	putchar('\n');

	return (0);
}

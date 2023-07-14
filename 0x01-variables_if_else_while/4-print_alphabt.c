#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints alphabets
 *
 * Return: Always 0 if success else fail
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' || ch != 'q')
			putchar(ch);
		ch++
	}
	putchar('\n');

	return (0);
}

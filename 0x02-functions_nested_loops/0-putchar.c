#include "main.h"

/**
 * main - Entry point
 *
 * Description: A C program that prints a _putchar using putchar prototype
 *
 * Return: Always 0 if success else fail
*/
int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
	{
		_putchar(str[ch]);
	}
	_putchar('\n');
	return (0);
}
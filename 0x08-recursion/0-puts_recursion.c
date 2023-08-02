#include "main.h"

/**
 * Description: _puts_recursion - prints a string
 * Input:
 *	@s: [char pointer] --> points to the string what you wanna print
 * Return: NULL
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(++s);
}

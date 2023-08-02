#include "main.h"

/**
 * Description: _print_rev_recursion - prints str in reverse using recursion
 * Input:
 *	@s: [char pointer] --> points to the string what I wanna print
 * Return: NULL
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}

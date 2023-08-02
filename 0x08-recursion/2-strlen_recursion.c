#include "main.h"

/**
 * Description: _strlen_recursion - figure out length of str using recursio
 * Input:
 *	@s: [char pointer] --> points to a str what you wanna know its length
 * Return: length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(++s));
}

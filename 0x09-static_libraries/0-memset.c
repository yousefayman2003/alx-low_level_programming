#include "main.h"

/**
 * *_memset - fills the first n bytes of the memory with the constant byte b
 * @s: pointer
 * @b: constant char
 * @n: number of bytes to use
 * Return: pointer s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}

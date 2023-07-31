#include "main.h"

/**
 * *_strchr - first occurrence of the character c in the string s, or NULL
 * @s: pointer
 * @c: constant char
 * Return: pointer s
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}

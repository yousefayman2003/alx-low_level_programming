#include "main.h"

/**
 * *_strspn - number of bytes in the initial segment of s
 * @s: pointer
 * @accept: constant bytes
 * Return: ui
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[i] != s[j]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}

	return (i);
}

#include "main.h"

/**
 * *_strpbrk - function locates the first occurrence in the string s
 * @s: pointer
 * @accept: constant bytes
 * Return: pointer p
*/

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;
	char *p;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}

	return (0);

}

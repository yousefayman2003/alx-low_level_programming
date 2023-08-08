#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * Description: str_concat - concatenates two strings
 *
 * Input:
 *	@s1: [char pointer] --> the first string
 *	@s2: [char pointer] --> the second string
 *
 * Return: pointer to first byte of the new location that contains
 * concatenation of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	int i, len1 = 0, len2 = 0;
	char *concat;

	if (s1 == NULL && s2 == NULL)
	{
		concat = malloc(1);
		concat[0] = '\0';
		return (concat);
	}

	if (s1 != NULL)
	{
		while (s1[len1] != '\0')
		{
			len1++;
		}
	}

	if (s2 != NULL)
	{
		while (s2[len2] != '\0')
		{
			len2++;
		}
	}
	concat = malloc(len1 + len2 + 1);
	if (concat == NULL)
		return ('\0');
	for (i = 0; i < len1; i++)
	{
		concat[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		concat[len1 + i] = s2[i];
	}
	concat[len1 + len2] = '\0';
	return (concat);
}

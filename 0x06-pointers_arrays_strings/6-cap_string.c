#include "main.h"
#include <stdio.h>

/**
 * isLower - determines if a character is in lower case
 * @c: character input
 * Return: 1 if true, else 0
*/
int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isDelimiter - determines if a character is a delimiter
 * @c: character input
 * Return: 1 if true, else 0
*/
int isDelimiter(char c)
{
	int i;
	char delimiter[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
	{
		if (c == delimiter[i])
			return (1);
	}
	return (0);
}

/**
 * cap_string - capitalizes all words of a string
 * @s: input string
 * Return: string capitalized
*/
char *cap_string(char *s)
{
	char *ptr = s;
	int foundDelimiter = 1;

	while (*s)
	{
		if (isDelimiter(*s))
			foundDelimiter = 1;
		else if (isLower(*s) && foundDelimiter)
		{
			*s -= 32;
			foundDelimiter = 0;
		}
		else
			foundDelimiter = 0;
		s++;
	}
	return (ptr);
}


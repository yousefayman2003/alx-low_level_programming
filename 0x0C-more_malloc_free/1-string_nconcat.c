#include "main.h"
#include <stdio.h>

/**
 * string_nconcat - concat two strings
 * @s1: first string
 * @s2: second string
 * @n: number of character to copy from s2
 * Return: Concatenated string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int s1_len = 0, s2_len = 0, i = 0, j = 0;
	char *string;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		s1_len++;
		i++;
	}

	while (s2[j] != '\0')
	{
		s2_len++;
		j++;
	}

	string = malloc(s1_len + n + 1);

	if (string == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		string[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		string[i] = s2[j];
		i++;
	}
	string[i] = '\0';

	return (string);
}

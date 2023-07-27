#include "main.h"

int _strlen(char *str);
int _max(int n1, int n2);

/**
 * Description: _strcmp - compare two strings lexicographically
 * Input:
 *	@s1: [char pointer] --> points to the first string
 *	@s2: [char pointer] --> points to the second string
 * Return: the first difference between them in ASCII or 0 if they're equal
 */

int _strcmp(char *s1, char *s2)
{
	int i, max, len_s1, len_s2;

	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2);
	max = _max(len_s1, len_s2);

	for (i = 0; i < max; i++)
	{
		if (i > len_s1 - 1)
			return (-(int) s2[i]);
		else if (i > len_s2 - 1)
			return ((int) s1[i]);

		if (s1[i] - s2[i] != 0)
			return ((int) (s1[i] - s2[i]));
	}
		return (0);
}



/**
 * Description: _strlen - return the length of a string
 * Input:
 *     @str: [char pointer] --> points to the string
 * Return: length of the string
 */

int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	return (len);
}



/**
 * Description: _max - find the maximum value between two numbers
 * Input:
 *     @n1: [int] --> the first number
 *     @n2: [int] --> the second number
 * Return: the largest number between them
 */

int _max(int n1, int n2)
{
	if (n1 >= n2)
		return (n1);
	else
		return (n2);
}

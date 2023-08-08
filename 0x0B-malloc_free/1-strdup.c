#include "main.h"
#include <stdlib.h>

/**
 * Description: _strdup - copy a string to a new memory location
 *
 * Input:
 *	@str: [char pointer] --> points to the string what you want to copy
 *
 * Return: pointer to first byte of the new location
 */

char *_strdup(char *str)
{
	int i, size = 0;
	char *copy;

	if (str == NULL)
		return (0);
	while (str[size] != '\0')
	{
		size++;
	}

	copy = malloc(size * sizeof(*str) + 1);

	if (copy == 0)
	{
		return (0);
	}
	else
	{
		for (int i = 0; i < size; i++)
			copy[i]	= str[i];
	}

	return (copy);

}

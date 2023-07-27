#include "main.h"

/**
 * Description: string_toupper - convert all lowercase chars to uppercase
 * Input:
 *	@str: [char pointer] --> points to a string
 * Return: the edited string
 */

char *string_toupper(char *str)
{
	int i, len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
	return (str);
}

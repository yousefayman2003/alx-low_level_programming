#include "main.h"

int _strlen(char *str);

/**
 * Description: _strncat - append n character from src string to dest string
 *
 * Input:
 *	@dest: [char pointer] --> points to the first char of dest string
 *	@src: [char pointer] --> points to the first char of src string
 *      @n: [int] The number of character that will be appended from src
 *
 * Return: pointer to the destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int src_len, dest_lchar, i = 0;

	dest_lchar = _strlen(dest);
	src_len = _strlen(src);

	/* Append the src string to dest */
	while (i < n && i < src_len)
	{
		dest[dest_lchar] = src[i];
		i++;
		dest_lchar++;
	}

	dest[dest_lchar] = '\0';

	return (dest);
}

/**
 * Description: _strlen - return the length of the string
 *
 * Input:
 *	@str: [char pointer] --> points to the first char of the string
 *
 * Return: length of the character
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

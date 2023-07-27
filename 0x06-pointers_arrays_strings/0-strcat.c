#include "main.h"

/**
 * Description: _strcat - append src string to dest string
 *
 * Input:
 *	@dest: [char pointer] --> points to the first char of dest string
 *	@src: [char pointer] --> points to the first char of src string
 *
 * Return: pointer to the destination string
 */

char *_strcat(char *dest, char *src)
{
	int len = 0, lchar, i = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	lchar = len;

	while (src[i] != '\0')
	{
		dest[lchar] = src[i];
		i++;
		lchar++;
	}

	dest[lchar] = '\0';

	return (dest);
}

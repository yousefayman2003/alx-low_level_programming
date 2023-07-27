#include "main.h"

int _strlen(char *str);



/**
 * Description: _strncpy - copy n chars from src to dest (overwriting)
 *
 * Input:
 *	@dest: [char pointer] --> ponits to the dest string
 *	@src: [char pointer] --> points to the src string
 *	@n: [int] --> number of copied characters
 *
 * Return: pointer to the dest string after coping process
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, src_len;

	src_len = _strlen(src);

	/* copy chars from src to dest */
	for (i = 0; i < n; i++)
	{
		if (i >= src_len)
		{
			dest[i] = '\0';
		}
		else
		{
			dest[i] = src[i];
		}
	}
	return (dest);
}



/**
 * Description: _strlen - return the length of a string
 *
 * Input:
 *	@str: [char pointer] --> points to the string
 *
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

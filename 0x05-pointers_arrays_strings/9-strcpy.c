#include "main.h"

/**
 * * _strcpy - copys a string
 *
 *  @dest: input 1
 *  @src: input 2
 *
 *  Return: copied string
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}

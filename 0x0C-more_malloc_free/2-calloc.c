#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function allocates memory for an array
 * @nmemb: number of elements
 * @size: element size
 * Return: pointer array
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
		return ('\0');

	p = malloc(nmemb * size);

	if (p == NULL)
		return ('\0');

	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;

	return (p);
}

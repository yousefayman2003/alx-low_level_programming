#include "main.h"
#include <stdlib.h>

/**
 * Description: malloc_checked - function allocats memory using malloc
 * Input:
 *	@b: [int] --> number of bytes what you want to reverse in memory
 * Return: if success return pointer to the first byte of reserved memory
 * otherwise return an exit function with status 98
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	else
		return (p);
}

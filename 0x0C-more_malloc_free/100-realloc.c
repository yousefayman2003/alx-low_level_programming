#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer array
 * @old_size: old size of ptr
 * @new_size: new size to allocate
 * Return: NULL
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *m;

	if (new_size == old_size)
		return (ptr);
	else if (ptr == NULL)
		return (malloc(new_size));
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	m = malloc(new_size);

	free(ptr);
	return (m);
}

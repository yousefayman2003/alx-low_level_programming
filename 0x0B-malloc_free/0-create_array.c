#include "main.h"
#include <stdlib.h>

/**
 * Description: create_array - creates an array of chars, and initializes it
 * with a specific char
 *
 * Input:
 *	@size: [unsigned int] --> number of elements in the array
 *	@c: [char] --> the specific char
 *
 * Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size);

	if (size == 0 || arr == 0)
		return (0);

	while (size--)
		arr[size] = c;
	return (arr);
}

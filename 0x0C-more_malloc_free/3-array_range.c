#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - creates array contains nums from min to max
 * @min: minimun number
 * @max: maximum number
 * Return: pointer array
*/

int *array_range(int min, int max)
{
	int *ptr;
	int i = 0, number;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));

	if (ptr == NULL)
		return (NULL);

	for (number = min; number <= max; number++)
		ptr[i++] = number;

	return (ptr);
}

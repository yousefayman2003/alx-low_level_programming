#include "search_algos.h"

/**
 * interpolation_search -  searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located, or -1 if value doesnt exist
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t l, h, pos;

	if (!array || size == 0)
		return (-1);

	l = 0;
	h = size - 1;
	while (array[l] <= value && l <= h)
	{
		pos = l + (((double)(h - l) / (array[h] - array[l])) * (value - array[l]));

		if (pos >= size)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
				break;
		}
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			l = pos + 1;
		else
			h = pos - 1;
	}
	return (-1);
}

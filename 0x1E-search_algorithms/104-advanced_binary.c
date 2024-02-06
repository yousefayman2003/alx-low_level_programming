#include "search_algos.h"

int b_recursive(int *array, size_t l, size_t h, int value);

/**
 * advanced_binary - searches for a first occurance of a
 *			value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the first index where value is located,
 *              If value is not present in array returns -1
*/
int advanced_binary(int *array, size_t size, int value)
{
	if (!array || size <= 0)
		return (-1);

	return (b_recursive(array, 0, size - 1, value));
}

/**
 * b_recursive - recursivly solve binary search
 * @array: pointer to first element in the array
 * @l: low index
 * @r: high index
 * @value: value to search for
 *
 * Return: index of found value in or -1 if not found
*/
int b_recursive(int *array, size_t l, size_t r, int value)
{
	size_t m;

	if (r < l)
		return (-1);

	printf("Searching in array: ");
	for (m = l; m < r; m++)
		printf("%d, ", array[m]);
	printf("%d\n", array[m]);

	m = l + (r - l) / 2;
	if (array[m] == value && (m == l || array[m - 1] != value))
		return (m);
	if (array[m] >= value)
		return (b_recursive(array, l, m, value));
	return (b_recursive(array, m + 1, r, value));
}

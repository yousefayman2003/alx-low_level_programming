#include "search_algos.h"

void print_array(int *array, size_t l, size_t r);
int recursive(int *array, size_t l, size_t h, int value);

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

	return (recursive(array, 0, size - 1, value));
}

/**
 * print_array - prints given array
 * @array: pointer to first element in an array
 * @l: first index to print form
 * @r: last index to print to
*/
void print_array(int *array, size_t l, size_t r)
{
	size_t i;

	if (!array)
		return;

	printf("Searching in array: ");
	for (i = l; i < r; i++)
	{
		printf("%d, ", array[i]);
	}
	/* print last element */
	printf("%d\n", array[r]);
}

/**
 * recursive - recursivly solve binary search
 * @array: pointer to first element in the array
 * @l: low index
 * @r: high index
 * @value: value to search for
 *
 * Return: index of found value in or -1 if not found
*/
int recursive(int *array, size_t l, size_t r, int value)
{
	size_t m;

	while (l <= r)
	{
		m = (l + r) / 2;

		print_array(array, l, r);

		if (array[l] == value)
			return (l);

		if (array[m] == value && (m == l || array[m - 1] != value))
			return (m);
		if (array[m] < value)
			return (recursive(array, m + 1, r, value));
		if (array[m] >= value)
			return (recursive(array, l, m, value));
	}
	return (-1);
}

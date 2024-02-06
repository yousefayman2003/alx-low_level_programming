#include "search_algos.h"

void print_array(int *array, size_t l, size_t r);

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the first index where value is located,
 *              If value is not present in array returns -1
*/
int binary_search(int *array, size_t size, int value)
{
	size_t l, r, m;

	if (!array || !size)
		return (-1);

	l = 0;
	r = size - 1;
	while (l <= r)
	{
		m = l + (r - l) / 2;

		print_array(array, l, r);

		if (array[m] == value)
			return (m);
		else if (array[m] < value)
			l = m + 1;
		else
			r = m - 1;
	}
	return (-1);
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

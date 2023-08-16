#include "function_pointers.h"

/**
 * array_iterator - iterates through array
 * @array: the array
 * @size: array size
 * @action: function pointer
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
		while (array <= end)
			action(*array++);
}

#include "main.h"

/**
 *  swap_int - swap to integers values
 *
 * @a : pointer input
 * @b : pointer input
*/

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

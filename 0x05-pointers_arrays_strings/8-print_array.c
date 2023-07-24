#include "main.h"

/**
 *  print_array - prints the values stored in array
 *
 *  @a: input 1
 *  @n: input 2
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}

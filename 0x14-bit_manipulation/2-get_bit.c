#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number
 * @index: given index
 * Return: bit at index
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long long size = sizeof(n) * 8;

	if (index >= size)
		return (-1);

	return (n >> index & 1);
}

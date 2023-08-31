#include "main.h"

/**
 * get_endianness - checks the endianness.
 * Return: 1 if small endian, 0 if big
*/
int get_endianness(void)
{
	unsigned long long n = 1;

	return (*(char *)&n);
}

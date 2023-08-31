#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to string
 * Return: converted number
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '1' && *b != '0')
			return (0);
		number = number * 2 + (*b++ - '0');
	}

	return (number)
}

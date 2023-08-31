#include "main.h"

/**
 * flip_bits -  returns the number of bits you would
 * 		need to flip to get from one number to another.
 * @n: first number
 * @m: second number
 * Return: number of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int value = n ^ m;
	int cnt = 0;

	while (value)
	{
		if (value & 1uL)
			cnt++;
		value = value >> 1;
	}

	return (cnt);
}

#include "main.h"

/**
 * Description: _sqrt - calculate square root of a number
 * Input:
 *	@n: [int] --> squared of the target number
 *	@high: [int] --> the number squared
 *	@low: [int] --> the minimum border
 * Return: square root of n or -1 if there no integer square root for it
 */

int _sqrt(int high, int low, unsigned long int n)
{
	unsigned long int mid = low + (high - low) / 2;

	if (mid * mid == n)
		return (mid);

	else if (high - low == 1)
		return (-1);

	else if (mid * mid > n)
		return (_sqrt(mid, low, n));

	else
		return (_sqrt(high, mid, n));
}

/**
 * Description: _sqrt_recursion - returns the natural square root of a number
 * Input:
 *	@n: [int] --> number
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	if (n == 1 || n == 2)
		return (n);
	if (n <= 0)
		return (-1);

	return (_sqrt(n, 0, n));
}

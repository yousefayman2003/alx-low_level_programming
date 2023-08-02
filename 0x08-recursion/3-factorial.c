#include "main.h"

/**
 * Description: factorial - returns the factorial of a given number
 * Input:
 *	@n: [int] --> number of factorial
 * Return: factorial n
 */

int factorial(int n)
{
	if (n == 1 || n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}

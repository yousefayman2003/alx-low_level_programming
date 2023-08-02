#include "main.h"

int is_prime(int, int);

/**
 * Description: is_prime_number - check if the number is prime or not
 * Input:
 *	@n: [int] --> a number what you will check
 * Return: 1 if the number is prime
 *	0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, 1));
}

/**
 * Description: is_prime - check if the number prime or not using recursion
 * Input:
 *	@n: [int] --> the number
 *	@divisor: [int] --> divisor
 * Return: 1 if yes otherwise 0
 */

int is_prime(int n, int divisor)
{
	if (divisor > (n / 2))
		return (1);

	if (n % divisor == 0 && divisor != n && divisor != 1)
		return (0);
	else
		return (is_prime(n, divisor + 1));
}

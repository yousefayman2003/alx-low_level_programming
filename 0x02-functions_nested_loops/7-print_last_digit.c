#include "main.h"

/**
 *  print_last_digit - gets the last digit from a given number
 *
 *  @n: integer type input
 *
 *  Return: n % 10
*/

int print_last_digit(int n)
{
	_putchar((n % 10) + '0');
	return (n % 10);
}

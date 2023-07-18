#include "main.h"

/**
 *  _abs - gets the absolute value of a given number
 *
 *  @n: integer type input
 *
 *  Return: n if n >=0, else -1 * n
 *
*/

int _abs(int n)
{
	if (n >= 0)
		return (n);
	return (-1 * n);
}

#include "main.h"

/**
 * Description: _isdigit - check if the character is a digit
 *
 * Input:
 *      @c: the ascii code of the character
 *
 * Return: 1 is digit else 0
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}

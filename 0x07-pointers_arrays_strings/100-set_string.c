#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: points to a pointer that points to a str
 * @to: points to a string
 */

void set_string(char **s, char *to)
{
	*s = to;
}

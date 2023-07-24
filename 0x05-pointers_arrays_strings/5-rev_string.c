#include "main.h"

/**
 * rev_string - reverse a given string
 *
 * @s: input
*/

void rev_string(char *s)
{
	int l = 0, i;
	char tmp;

	while (s[l] != '\0')
		l++;

	for (i = 0; i < l / 2; i++)
	{
		tmp = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = tmp;
	}
}

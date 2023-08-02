#include "main.h"

/**
 * move_past_star - iterets past *
 * @s2: the second string
 * Return: the pointer past star
*/
char *move_past_star(char *s2)
{
	if (*s2 == '*')
		return (move_past_start(s2 + 1));
	else
		return (s2);
}

/**
 * inception - convert magic to relilaty
 * @s1: first string
 * @s2: second string
 * Return: 1 if identical, else 0
*/
int inception(char *s1, char *s2)
{
	int r = 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
		r += wildcmp(s1 + 1, s2 + 1);
	r += inception(s1 + 1, s2);
	return (r);
}

/**
 * wildcmp - compares two string lexo.
 * @s1: first string
 * @s2: second string
 * Return: 1 if identical, else 0
*/
int wildcmp(char *s1, char *s2)
{
	int r = 0;

	if (!*s1 && *s2 == '*' && !*move_past_star(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		if (*s1 == *s2)
			r += wildcmp(s1 + 1, s2 + 1);
		r += inception(s1, s2);
		return (!!r);
	}
	return (0);
}

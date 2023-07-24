#include "main.h"

/**
 *  _strlen - returns the length of a given string
 *
 * @s : pointer input
 *
 * Return: length of the string
*/

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; counter++)
	{
		++counter;
	}

	return (counter);
}

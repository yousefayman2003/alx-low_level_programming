#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * Description: argstostr - concatenates all the arguments of your program
 * Input:
 *	@ac: [int] --> number of arguments
 *	@av: [char array of arrays] --> array of strings (arguments)
 * Return: pointer to concatenated string
 */

char *argstostr(int ac, char **av)
{
	int i, j, lc = 0, space = 0;
	char *concat;

	if (ac == 0 || av == NULL)
		return ('\0');

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			j++;
		}
		space += ++j;
	}

	concat = malloc(sizeof(char) * space + 1);

	if (concat == NULL)
		return ('\0');

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			concat[lc++] = av[i][j++];
		}
		concat[lc++] = '\n';
	}
	concat[lc] = '\0';
	return (concat);
}

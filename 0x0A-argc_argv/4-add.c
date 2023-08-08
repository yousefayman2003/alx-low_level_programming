#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * Description: main - adds positive numbers from command line
 * Input:
 *	@argc: [int] --> arguments count
 *	@argv: [char pointer to pointer] --> arguments vector
 * Return: 0 if Success 1 otherwise
 */

int main(int argc, char *argv[])
{
	int i, sum = 0, len = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		len = 0;

		while (argv[i][len] != '\0')
		{
			if (argv[i][len] < '0' || argv[i][len] > '9')
			{
				printf("Error\n");
				return (1);
			}
			len++;
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

#include "main.h"

/**
 * Description: main - prints all arguments it receives
 * Input:
 *	@argc: [int] --> arguments count
 *	@argv: [char pointer to pointer] --> arguments vector
 * Return: 0 always success
 */

int main(int argc, char **argv)
{
	int i, len;
	/* print all arguments which are passed into main */
	for (i = 0; i < argc; i++)
	{
		len = 0;
		while (argv[i][len] != '\0')
		{
			_putchar(argv[i][len++]);
		}
		_putchar('\n');
	}
	return (0);
}

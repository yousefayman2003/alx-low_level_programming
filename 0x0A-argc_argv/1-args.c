#include "main.h"

/**
 * Description: main - prints the number of arguments passed into it
 * Input:
 *	@argc: [int] --> arguemnts count
 *	@argv: [char pointer to pointer] --> arguments vector
 * Return: 0 always success
 */

int main(int argc, __attribute__((unused)) char **argv)
{
	_putchar(argc - 1 + '0');
	_putchar('\n');
	return (0);
}

#include <unistd.h>
#include "main.h"

/**
 * _putchar - print a char to the standard ouptut using write
 * @c: the character what you want to print
 *
 * Return: output of write functionsuccess 1.
 *	   On error, -1 is returned, and errno is set appropriately
*/

int _putchar(char c)
{
return (write(1, &c, 1));
}

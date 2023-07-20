#include "main.h"
#include <unistd.h>

void print_fizz(void);
void print_buzz(void);

/**
 * Description: main - program that solve the fizz buzz interview question
 *
 * Input: Null
 *
 * Return: Always 0
 */

int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
print_fizz();
print_buzz();
}
else if (i % 3 == 0)
print_fizz();
else if (i % 5 == 0)
print_buzz();
else
{
if (i >= 10)
{
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');
}
else
_putchar(i + '0');
}
if (i != 100)
_putchar(' ');
}
_putchar('\n');
return (0);
}


/**
 * Desciprtion: print_fizz - write Fizz word using _putchar
 *
 * Input: Null
 *
 * Return: Null
 */

void print_fizz(void)
{
_putchar('F');
_putchar('i');
_putchar('z');
_putchar('z');
return;
}

/**
 * Desciprtion: print_buzz - write Buzz word using _putchar
 *
 * Input: Null
 *
 * Return: Null
 */


void print_buzz(void)
{
_putchar('B');
_putchar('u');
_putchar('z');
_putchar('z');
return;
}

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

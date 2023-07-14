#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints alphabets
 *
 * Return: Always 0 if success else fail
*/

int main(void)
{
	char ch = 'a';
	char ch_cap = 'A';

	/*a - z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	/*A - Z*/
	while (ch_cap <= 'Z')
	{
		putchar(ch_cap);
		ch++;
	}
	putchar('\n');
	return (0);
}

#include "main.h"
#include <stdio.h>

/**
 * isPrintable - determines if n is a printable ascii character
 *
 * @n: input integer
 *
 * Return: 1 if true, else 0
*/

int isPrintable(int n)
{
	return (n >= 32 && n <= 126);
}

/**
 * printHexes - print hex values
 * @b: string to print
 * @start: staring pos
 * @end: ending pos
*/

void printHexes(char *b, int start, int end)
{
	int i = 0;

	while (i < 10)
	{
		if (i < end)
			printf("%02x", *(b + start + i));
		else
			printf("  ");
		if (i % 2)
			printf(" ");
		i++;

	}
}

/**
 * printASCII - print ascii values for string b
 * @b: string to print
 * @start: starting pos
 * @end: ending pos
*/

void printASCII(char *b, int start, int end)
{
	int ch, i = 0;

	while (i < end)
	{
		ch = *(b + i + start);
		if (!isPrintable(ch))
			ch = 46;
		printf("%c", ch);
		i++;
	}
}

/**
 * print_buffer -  prints a buffer
 * @b: string
 * @size: size of buffer
*/

void print_buffer(char *b, int size)
{
	int start, end;

	if (size > 0)
	{
		for (start = 0; start < size; start += 10)
		{
			end = (size - start < 10) ? size - start : 10;
			printf("%08x: ", start);
			printHexes(b, start, end);
			printASCII(b, start, end);
			printf("\n");
		}
	} else
		printf("\n");
}

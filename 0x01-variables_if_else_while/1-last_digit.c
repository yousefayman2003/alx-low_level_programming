#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints last digit of n
 *
 * Return: Always 0 if success else fail
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last_digit;

	last_digit = n % 10;
	if (last_digit == 0)
		printf("Last digit of %d is 0 and is 0\n", n);
	else if (last_digit < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
	else
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);


	return (0);
}

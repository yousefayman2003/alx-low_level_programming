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
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;
	if (digit == 0)
		printf("Last digit of %d is 0 and is 0\n", n);
	else if (digit < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, digit);
	else
		printf("Last digit of %d is %d and is greater than 5\n", n, digit);


	return (0);
}

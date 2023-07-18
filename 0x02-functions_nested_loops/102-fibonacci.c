#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the first 50 fibonacci numbers
 *
 * Return: Always 0 if success else fail
*/
int main(void)
{
	int count;
	unsigned long prev = 0, curr = 1;

	for (count = 0; count < 50; count++)
	{
		printf("%lu", prev + curr);

		prev = curr;
		curr = prev + curr;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}

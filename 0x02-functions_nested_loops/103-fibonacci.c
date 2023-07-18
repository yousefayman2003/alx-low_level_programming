#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints sum of fib numbers which are even
 *			and below 4million
 *
 * Return: Always 0 if success else fail
*/
int main(void)
{
	unsigned long prev = 0, curr = 1, sum;
	float total_sum;

	while (1)
	{
		sum = prev + curr;

		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			total_sum += sum;

		prev = curr;
		curr = sum;
	}
	printf("%.0f\n", total_sum);

	return (0);
}

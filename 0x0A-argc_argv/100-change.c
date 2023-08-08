#include <stdio.h>
#include <stdlib.h>

int n_coins(int, int*, int);
int _min(int*, int);

/**
 * Description: main - prints the minimum number of coins to make change for
 * an amount of money
 * Input:
 *	@argc: [int] --> arguments count
 *	@argv: [char pointer to pointer] --> arguments vector
 * Return: 0 if success 1 otherwise
 */

int main(int argc, char *argv[])
{
	int money, ans;
	int deno[] = {1, 2, 5, 10, 25};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	money = atoi(argv[1]);

	if (money < 0)
	{
		printf("0\n");
		return (0);
	}

	ans = n_coins(money, deno, 5);

	printf("%d\n", ans);

	return (0);
}

/**
 * Description: n_coins - get the minimum number of coins for changing
 * Input:
 *	@money: [int] --> amount of money what you want to change
 *	@deno: [int array] --> denominations what you have
 *	@n: [int] --> number of denominations
 * Return: minimum number of coins
 */

int n_coins(int money, int *deno, int n)
{
	int i, j, rem, counter;
	int choices[5];

	for (i = 0; i < n; i++)
	{
		counter = 0;
		rem  = money;

		for (j = i; j >= 0; j--)
		{
			counter += rem / deno[j];
			rem %= deno[j];
		}
		choices[i] = counter;
	}

	return (_min(choices, n));
}

/**
 * Description: _min - return the minimum number in the array
 * Input:
 *	@nums: [int array] --> array of numbers
 *	@n: [int] --> number of elements in the array
 * Return: the minimum number in the array
 */

int _min(int *nums, int n)
{
	int i, min = nums[0];

	for (i = 1; i < n; i++)
	{
		if (nums[i] < min)
			min = nums[i];
	}
	return (min);
}

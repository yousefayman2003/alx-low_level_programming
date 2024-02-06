#include "search_algos.h"

/**
 * jump_list -  searches for a value in a sorted list of integers
 *		using the Jump search algorithm.
 * @list: a pointer to the head of the list to search in
 * @size: the number of nodes in list
 * @value: value to search for
 *
 * Return: a pointer to the first node where value is located
*/
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump, index;
	listint_t *cur, *prev;

	if (!list || size == 0)
		return (NULL);

	jump = sqrt(size);
	cur = list;

	while (cur->n < value && cur->next)
	{
		prev = cur;
		index = 0;
		while (cur->next && index < jump)
		{
			cur = cur->next;
			index++;
		}
		printf("Value checked at index [%ld] = [%d]\n", cur->index, cur->n);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", prev->index,
	       cur->index);

	cur = prev;
	while (cur->n < value)
	{
		printf("Value checked at index [%ld] = [%d]\n", cur->index, cur->n);
		if (cur->next)
			cur = cur->next;
		else
			return (NULL);
	}
	if (cur->n == value)
	{
		printf("Value checked at index [%ld] = [%d]\n", cur->index, cur->n);
		return (cur);
	}

	return (NULL);
}

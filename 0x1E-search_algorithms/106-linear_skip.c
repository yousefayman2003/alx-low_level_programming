#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers.
 * @list: a pointer to the head of the list to search in
 * @value: value to search for
 *
 * Return: a pointer to the first node where value is located
*/
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *curr, *prev;

	if (!list)
		return (NULL);

	curr = list;
	while (curr->next && curr->n < value)
	{
		prev = curr;
		if (curr->express)
			curr = curr->express;
		else
		{
			while (curr->next)
				curr = curr->next;
		}
		if (curr->next)
			printf("Value checked at index [%ld] = [%d]\n", curr->index, curr->n);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", prev->index,
	       curr->index);

	curr = prev;
	while (curr && curr->n < value)
	{
		printf("Value checked at index [%ld] = [%d]\n", curr->index, curr->n);
		if (curr->next)
			curr = curr->next;
		else
			return (NULL);
	}
	if (curr && curr->n == value)
	{
		printf("Value checked at index [%ld] = [%d]\n", curr->index, curr->n);
		return (curr);
	}

	return (NULL);
}

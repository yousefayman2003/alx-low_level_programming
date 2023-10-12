#include "lists.h"

/**
 * sum_dlistint - sum of all the data of a dlistint_t linked list
 * @head: pointer to head of list
 *
 * Return: sum of list
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

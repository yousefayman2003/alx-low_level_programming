#include "lists.h"

/**
 * sum_listint - returns the sum of data of a listint_t linked list
 * @head: head pointer of the linked list
 * Return: address of new node or NULL if failed
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

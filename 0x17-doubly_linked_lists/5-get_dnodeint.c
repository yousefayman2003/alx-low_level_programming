#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node
 * of a dlistint_t linked list.
 * @head: pointer to head of list
 * @index: index of node to get
 *
 * Return: the nth node or NULL if the node does not exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int idx = 0;

	while (head)
	{
		if (idx == index)
			return (head);
		idx++;
		head = head->next;
	}

	return (NULL);
}

#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t list
 * head: pointer to head node
 * @index: index of the node
 * Return: address of the node, or NULL if it doesn't exit
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int cnt = 0;

	while (head)
	{
		if (cnt == index)
			return (head);
		cnt++;
		head = head->next;
	}
	return (NULL)
}

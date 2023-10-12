#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * of a dlistint_t list.
 * @head: pointer to pointer to head
 * @n: element to insert in node
 *
 * Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *curr = *head;
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (!node || !head)
	{
		return (NULL);
	}
	node->n = n;
	node->prev = NULL;

	if (!curr)
	{
		*head = node;
		node->next = NULL;
	}
	else
	{
		curr->prev = node;
		node->next = curr;
		*head = node;
	}

	return (node);
}

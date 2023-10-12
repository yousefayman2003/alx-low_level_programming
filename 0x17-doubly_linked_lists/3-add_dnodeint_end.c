#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to pointer to head
 * @n: value of new node
 *
 * Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *curr = *head;
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (!node || !head)
	{
		return (NULL);
	}
	node->n = n;
	node->next = NULL;

	if (!curr)
	{
		*head = node;
		node->prev = NULL;
	}
	else
	{
		while (curr->next)
		{
			curr = curr->next;
		}

		curr->next = node;
		node->prev = curr;
	}
	return (node);
}

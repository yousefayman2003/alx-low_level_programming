#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to pointer to head of list
 * @idx: index to insert node in
 * @n: value of node
 *
 * Return: he address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curr = *h;
	dlistint_t *node;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (idx != 1)
	{
		idx--;
		curr = curr->next;
		if (!curr)
			return (NULL);
	}

	if (curr->next == NULL)
		return (add_dnodeint_end(h, n));


	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->prev = curr;
	node->next = curr->next;
	curr->next->prev = node;
	curr->next = node;

	return (node);
}

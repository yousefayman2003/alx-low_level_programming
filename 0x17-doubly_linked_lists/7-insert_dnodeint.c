#include "lists.h"

/***/
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

#include "lists.h"

/**
 * print_listint - gets number of nodes in a linked list
 * @h: linked list head
 * Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (len);
}

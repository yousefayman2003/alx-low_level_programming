#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: head pointer of the linked list
*/
void free_listint(listint_t *head)
{
	listint_t *node = head;

	if (!node)
		return;

	while (head)
	{
		head = node->next;
		free(node);
		node = head;
	}
}

#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: head pointer of the linked list
*/
void free_listint(listint_t *head)
{
	listint_t *node = malloc(sizeof(listint_t));

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}

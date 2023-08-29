#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: head pointer of the linked list
 * @n: value of new node
 * Return: address of new node or NULL if failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));
	listint_t *temp = *head;

	if (!node)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (!*head)
		*head = node;
	else
	{
		while (temp->next)
		{
			temp = temp->next
		}
		temp->next = node;
	}

	return (node);

}

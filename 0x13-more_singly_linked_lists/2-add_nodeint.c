#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: head pointer of the linked list
 * @n: value of new node
 * Return: address of new node or NULL if failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (!head || !node)
		return (NULL);

	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}

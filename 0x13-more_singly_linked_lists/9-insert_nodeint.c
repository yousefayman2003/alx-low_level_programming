#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: head pointer of the linked list
 * @idx: index to insert in
 * @n: value of node
 * Return: address of new node or NULL if failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node = malloc(sizeof(listint_t));
	listint_t *temp;
	unsigned int  i = 0;

	if (!node)
		return (NULL);

	node->n = n;
	node->next = NULL;
	if (!idx)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	temp  = *head;
	while (temp)
	{
		if (i == idx - 1)
		{
			node->next = temp->next;
			temp->next = node;
			return (node);
		}
		temp = temp->next;
		i++;

	}
	free(temp);
	return (NULL);


}

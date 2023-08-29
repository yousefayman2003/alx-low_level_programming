#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: first node in a linked list
 * Return: returns the head node’s data (n)
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (!head || !*head)
		return (0);

	data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (data);
}

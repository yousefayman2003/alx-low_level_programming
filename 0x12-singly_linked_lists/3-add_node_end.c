#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of the linked list
 *
 * @head: head of the linked list
 *
 * @str: string
 * Return: the address of the new element, NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return ('\0');

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	temp = *head;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = new;

	return (new);
}

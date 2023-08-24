#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * list_len - function to get the number of elements in a linked list
 *
 * @h: list head
 *
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	int cnt = 0;

	while (h)
	{
		cnt++;
		h = h->next;
	}

	return (cnt);
}

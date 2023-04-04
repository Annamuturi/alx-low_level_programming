#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - return the number of elements in a linked listint_t list.
 * @h: pointer to the head of linked list.
 *
 * Return: number of elements in a linked listint_t list.
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}


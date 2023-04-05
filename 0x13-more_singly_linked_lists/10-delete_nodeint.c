#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - delete index of a listint_t linked list.
 * @index: index of the node to delete.
 * @head: double pointer to the first head node in the list.
 *
 * Return: 1 if succes ELSE (-1) if failure.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	listint_t *temp, *copy = *head;
	unsigned int node;

	if (copy == NULL)
		return (-1);

	if (index == 0)
	{

		*head = (*head)->next;
		free(copy);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)

	{
		if (copy->next == NULL)
			return (-1);

		copy = copy->next;
	}

	temp = copy->next;
	copy->next = temp->next;
	free(temp);
	return (1);
}

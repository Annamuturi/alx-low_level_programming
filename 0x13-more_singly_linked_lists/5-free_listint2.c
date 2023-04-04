#include "lists.h"
#include <stdio.h>

/**
 * free_listint2 - free a listint_t list5-free-list2.c
 * @head: a double pointer to the head of the list.
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{

	listint_t *temp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}

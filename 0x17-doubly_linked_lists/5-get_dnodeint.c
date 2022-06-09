#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns nth node of
 * dlistint_t
 * @head: linked list.
 * @index: index of linked list to be returned;
 * Return: value of linked list at index.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	for (i = 0; head != NULL; i++)
	{
		if (i == index)
		{
			new->n = head->n;
			return (new);
		}
		head = head->next;
	}
	return (NULL);
}

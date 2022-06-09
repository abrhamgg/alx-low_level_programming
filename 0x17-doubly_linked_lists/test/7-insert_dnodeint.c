#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node at a
 * given position.
 * @h: linked list
 * @idx: index where node is going to be added.
 * @n: node to be created
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	dlistint_t *new = malloc(sizeof(dlistint_t));
	unsigned int len = print_dlistint(current) - 1;
	unsigned int i = 0;

	if (!new)
		return (NULL);
	new->n = n;
	if (current == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		current = new;
		return (NULL);
	}
	
	if (idx > len)
		return (NULL);
	if (idx == 0)
	{
		add_dnodeint(h, n);
		return (*h);
	}
	if (idx == len)
	{
		add_dnodeint_end(h, n);
		return (*h);
	}
	for (i = 0; current != NULL; i++)
	{
		if (i == idx)
		{
			new->next = current;
			new->prev = current->prev;
			new->prev->next = new;
			current->prev = new;
			return (current);
		}
		current = current->next;

	}
	return (NULL);
}

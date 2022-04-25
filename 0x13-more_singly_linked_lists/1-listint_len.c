#include "lists.h"
#include <stdio.h>

/**
 * listint_len - function that returns no of elements in a linked list.
 * @h: linked list.
 * Return: number of nodes.
 */

size_t listint_len(const listint_t *h)
{
	unsigned int c = 0;

	while (h != NULL)
	{
		h = h->next;
		c++;
	}
	return (c);
}


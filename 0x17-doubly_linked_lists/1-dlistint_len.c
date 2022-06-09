#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - function that returns a length of linked
 * list.
 * @h: linked list.
 * Return: number of elements in linked list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	for (len = 0; h != NULL; len++)
		h = h->next;
	return (len);
}

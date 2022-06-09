#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - function that prints elements of linked
 * list
 * @h: doubly linked list.
 * Return: number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;

	for (counter = 0; h != NULL; counter++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (counter);
}

#include <stdio.h>
#include "lists.h"

/**
 * print_listint - function that prints all the elements of a linked list.
 * @h: linked list.
 * Return: number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	unsigned int c = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		c++;
	}
	return (c);
}

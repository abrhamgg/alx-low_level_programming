#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - function that returns the nth node of a linked list.
 * @head: pointer to linked list.
 * @index: index of a node starting from 0;
 * Return: nth node of linked list.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i = 0;

	ptr = head;
	for (i = 0; ptr != NULL; i++)
	{
		if (i == index)
			return (ptr);
		ptr = ptr->next;
	}
	return (NULL);
}

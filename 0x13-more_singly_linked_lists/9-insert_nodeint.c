#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - function that
 * inserts a new node at a given position.
 * @head: pointer to node;
 * @idx: location for the node to be added.
 * @n: node to be inserted.
 * Return: node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = *head;
	listint_t *newnode = malloc(sizeof(listint_t));
	unsigned int i;

	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	idx--;

	for (i = 0; ptr != NULL; i++)
	{
		if (i == idx)
		{
			while (idx != 0)
			{
				ptr = ptr->next;
				idx--;
			}
			newnode->next = ptr->next;
			ptr->next = newnode;
			return (ptr);
		}
	}
	return (NULL);
}

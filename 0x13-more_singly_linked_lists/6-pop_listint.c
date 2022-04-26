#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - function that deletes the head node linked list.
 * @head: pointer to a node.
 * Return: data of the head node;
 */

int pop_listint(listint_t **head)
{
	listint_t *current = *head;
	int i;

	if (*head == NULL)
		return (1);
	*head = current->next;
	i = current->n;
	free(current);
	return (i);
}

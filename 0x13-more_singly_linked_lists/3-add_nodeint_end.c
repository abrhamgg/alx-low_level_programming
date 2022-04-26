#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - function that adds a node at the end.
 * @head: pointer to node.
 * @n: new node.
 * Return: pointer to a linked list.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}
	else
	{
		listint_t *ptr = *head;

		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = temp;
		return (ptr);
	}
}

#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function that frees a linked list;
 * @head: pointer to a node;
 * Return: void.
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr = *head;
	listint_t *temp;

	if (head == NULL)
		return;
	while (ptr != NULL)
	{
		temp = ptr;
		ptr = ptr->next;
		free(temp);
	}
	*head = NULL;
}

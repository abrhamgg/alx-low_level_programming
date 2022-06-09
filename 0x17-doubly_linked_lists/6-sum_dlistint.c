#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all data.
 * @head: linked list
 * Return: int
 */

int sum_dlistint(dlistint_t *head)
{
	int i = 0;

	while (head != NULL)
	{
		i = i + head->n;
		head = head->next;
	}
	return (i);
}

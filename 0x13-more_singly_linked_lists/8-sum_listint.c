#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - function that returs summ of all data(n) of a linked list.
 * @head: linked list.
 * Return: int.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}

#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: size od the array
 * @hash_table_t - newly created hash table
 * Return: pointer to the newly created hash table or NULL if something
 * goes wrong.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i = 0;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	if (size == 0)
	{
		return (NULL);
	}
	ht->array = malloc(sizeof(hash_node_t) * size);
	if (ht->array == NULL)
		return (NULL);
	ht->size = size;
	return (ht);
}

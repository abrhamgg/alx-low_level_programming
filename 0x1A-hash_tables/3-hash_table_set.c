#include "hash_tables.h"
/**
 * hash_table_set - function that add new element to hash table
 * @key: is the key
 * @value: value associated with key value.
 * Return: 1 if success && 0 if it failed
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *new = malloc(sizeof(hash_node_t));

	if (new == NULL)
		return (0);
	if (ht->array[index] != NULL && strcmp(ht->array[index]->key, key) == 0)
	{
		ht->array[index]->value = strdup(value);
		return (1);
	}
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}

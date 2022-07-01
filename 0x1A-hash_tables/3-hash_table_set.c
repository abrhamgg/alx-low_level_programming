#include "hash_tables.h"
/**
 * hash_table_set - function that add new element to hash table
 * @key: is the key
 * @value: value associated with key value.
 * Return: 1 if success && 0 if it failed
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = hash_djb2(key) / ht->size;
	hash_node_t *new = malloc(sizeof(hash_node_t));

	if (new == NULL);
		return (0);
	new->key = key;
	new->value = value;
	new->next = NULL;

	new = ht->array[index];
}

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "cool");
    return (EXIT_SUCCESS);
}

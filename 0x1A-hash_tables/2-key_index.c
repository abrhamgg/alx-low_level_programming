#include "hash_tables.h"
/**
 * key_index - function tht gives you index of a key
 * @key: is the key
 * @size: size of the array of hash table
 * Return: index of a key within the array.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key);

	index = index % size;
	return (index);
}

#include "hash_tables.h"

/**
 * key_index - Computes the index for a given key in a hash table.
 * @key: The key, a string.
 * @size: The size of the hash table.
 *
 * Return: The index where the key-value pair should be stored or retrieved.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = hash_djb2(key);
	unsigned long int index = hash_value % size;

	return (index);
}

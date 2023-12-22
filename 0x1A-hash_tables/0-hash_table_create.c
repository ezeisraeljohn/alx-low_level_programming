#include <stdio.h>
#include "hash_tables.h"

#include <stdlib.h>

/**
 * hash_table_create - Creates a new hash table.
 * @size: The size of the array (number of buckets) for the hash table.
 *
 * Return: A pointer to the newly created hash table, or NULL on failure.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *new_table = NULL;
    unsigned long int i;

    /* Allocate memory for the hash table structure */
    new_table = malloc(sizeof(hash_table_t));
    if (new_table == NULL)
        return (NULL);

    /* Allocate memory for the array of hash_node_t pointers */
    new_table->array = malloc(sizeof(hash_node_t *) * size);
    if (new_table->array == NULL)
    {
        free(new_table);
        return (NULL);
    }

    /* Initialize each element of the array to NULL (no nodes in the lists yet) */
    for (i = 0; i < size; i++)
        new_table->array[i] = NULL;

    /* Set the size of the hash table */
    new_table->size = size;

    return (new_table);
}

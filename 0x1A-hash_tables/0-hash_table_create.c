#include "hash_tables.h"

/**
* hash_table_create - creates a hash table
* @size: the size
*
* Return: pointer to the newly created hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t **arr = NULL;
    hash_table_t *hash_table = NULL;

    hash_table = malloc(sizeof(hash_table_t));
    if (!hash_table)
        return (NULL);

    arr = malloc(sizeof(hash_table_t *) * size);
    if (!arr)
        return (NULL);

    for (unsigned long int i = 0; i < size; i++)
        arr[i] = NULL;

    hash_table->size = size;
    hash_table->array = arr;

    return (hash_table);
}

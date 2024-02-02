#include "hash_tables.h"

/**
* key_index - gives you the index of a key_index
* @key: is the key_index
* @size: the size of the array of the hash hash_tables
*
* Return:the index of a key_index
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    return (hash_djb2(key) % size);
}

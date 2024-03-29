#include "hash_tables.h"

/**
 * key_index - get the index of the key.
 * @key: the key
 * @size: the size of the array of the hash table
 * Return: the index at which the key/value pair should be stored in.
 * Description: uses the djb2 algorithm.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

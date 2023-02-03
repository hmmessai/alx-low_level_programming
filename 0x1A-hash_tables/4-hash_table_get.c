#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: the hash tale you want to look into.
 * @key: the key you are looking for.
 * Return: the value associated with the element or
 *	NULL if key couldn't be found.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
		return (NULL);

	if (ht->array[index]->key == NULL)
		return (NULL);

	if (strcmp(key, ht->array[index]->key) == 0)
		return (ht->array[index]->value);
	return (NULL);
}

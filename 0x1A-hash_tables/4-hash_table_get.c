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
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
		return (NULL);

	node = ht->array[index];
	if (node->key == NULL)
		return (NULL);

	while (node && strcmp(key, node->key) != 0)
		node = node->next;
	return (node->value);
}

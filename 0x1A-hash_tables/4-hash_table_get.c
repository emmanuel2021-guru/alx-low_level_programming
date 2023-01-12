#include "hash_tables.h"

/**
 * hash_table_get - retrieves the value associated with a key
 * @ht: the hash table to be looked into
 * @key: the key you are looking for
 *
 * Return: the value associated with the element, or
 * NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int key_val;
	hash_node_t *current_node;

	key_val = key_index((const unsigned char*) key, ht->size);
	current_node = ht->array[key_val];
	if (current_node == NULL)
		return (NULL);
	else
		return (current_node->value);
}

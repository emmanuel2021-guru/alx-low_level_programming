#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table in question
 * @key: the key(cannot be an empty string)
 * @value: value associated with the key(can be an empty string)
 *
 * Return: 1 if it succeeded
 * 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *current_node;
	unsigned long int index;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	strcpy(node->key, key);
	strcpy(node->value, value);
	node->next = NULL;

	index = key_index((unsigned char*)node->key, ht->size);
	current_node = ht->array[index];

	if (current_node == NULL)
	{
		ht->array[index] = node;
	}
	else
	{
		node->next = ht->array[index];
	}

	return (1);
}

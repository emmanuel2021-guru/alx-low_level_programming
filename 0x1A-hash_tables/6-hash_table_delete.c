#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to be deleted
 *
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *current_node;

	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index] == NULL)
			continue;
		else
		{
			free(ht->array[index]->key);
			free(ht->array[index]->value);
			if (ht->array[index]->next == NULL)
				continue;
			else
			{
				current_node = ht->array[index];
				while (current_node->next->next != NULL)
				{
					free(current_node->next->key);
					free(current_node->next->value);
					current_node = current_node->next;
				}
			}
			free(ht->array[index]);
		}
	}

	free(ht->array);
	free(ht);
}

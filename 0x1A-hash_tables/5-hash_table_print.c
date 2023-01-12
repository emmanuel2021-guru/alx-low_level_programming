#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: table to be printed
 *
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;

	if (ht == NULL)
		printf("{}\n");
	else
	{
		printf("{");
		for (index = 0; index < ht->size; index++)
		{
			if (ht->array[index] == NULL)
				continue;
			else
				printf("'%s': '%s', ", ht->array[index]->key, ht->array[index]->value);
		}
	}
	printf("}\n");
}

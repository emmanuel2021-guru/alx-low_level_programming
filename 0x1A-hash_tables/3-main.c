#include "hash_tables.h"
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	hash_table_set(ht, "hetairas", "cool");
	hash_table_set(ht, "mentioner", "custom");
	hash_table_set(ht, "mother", "custom");
	hash_table_set(ht, "good", "custom");
	hash_table_set(ht, "emmanuel", "custom");
	return (EXIT_SUCCESS);
}

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

	ht = hash_table_create(10);
	hash_table_set(ht, "hetairas", "cool");
	hash_table_set(ht, "mentioner", "custom");
	return (EXIT_SUCCESS);
}

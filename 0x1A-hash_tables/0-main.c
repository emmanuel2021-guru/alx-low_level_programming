#include "hash_tables.h"
#include <string.h>

/**
 * main - check the code for
 *
 * Return: Always EXIT_SUCESS.
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	printf("%p\n", (void *)ht);
	return (EXIT_SUCCESS);
}

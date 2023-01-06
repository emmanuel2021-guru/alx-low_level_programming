#include "hash_tables.h"

/**
 * key_index - returns the index of a key
 * @key: the key of the value
 * @size: the size of the array of the hash table
 *
 * Return: the index at which the key/value pair should
 * be stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;

	return (index);
}

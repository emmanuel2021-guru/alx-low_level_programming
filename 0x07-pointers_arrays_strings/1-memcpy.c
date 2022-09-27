#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: memory area being copied to.
 * @src: memory area to be copied from.
 * @n: number of bytes to be copied.
 *
 * Return: a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;
	char *destination = dest, *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];

	return (to);
}

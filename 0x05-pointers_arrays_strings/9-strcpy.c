#include "main.h"

/**
 * _strcpy - Copies a string pointed to by @src, includeing the terminating
 * null byte, to a buffer pointed to by @dest.
 * @dest: buffer to copy the string to.
 * @src: the source string to copy.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}

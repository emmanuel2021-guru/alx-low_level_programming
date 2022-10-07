#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array of @nmemb elements
 * of @size bytes.
 * @nmemb: Number of elements in array.
 * @size: Number of bytes of each element in array.
 *
 * Return: NULL if @nmemb or @size is zero or malloc fails.
 * Otherwise a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *filler;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	filler = mem;

	for (index = 0; index < (size * nmemb); index++)
		filler[index] = '\0';

	return (mem);
}

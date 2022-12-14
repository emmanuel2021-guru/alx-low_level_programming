#include "main.h"
#include <stdlib.h>

/**
 * create_array - created an array of characters
 * and initializes it with a specific character.
 * @size: size of array
 * @c: character to create array from.
 *
 * Return: a pointer to the array
 * NULL if size = 0 or it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}

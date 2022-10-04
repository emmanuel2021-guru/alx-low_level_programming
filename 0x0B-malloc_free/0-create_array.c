#include "main.h"
#include <stdlib.h>

/**
 * create_array - created an array of char and initializes it with a specific char.
 * @size: size of array
 * @char: initialization char.
 *
 * Return: a pointer to the array
 * NULL if size = 0 or it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	int i;

	if (size == 0)
		return(NULL);

	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}

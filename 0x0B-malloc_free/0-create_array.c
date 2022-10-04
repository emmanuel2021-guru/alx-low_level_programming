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
	c = malloc(sizeof(char) * size);
	if (c == NULL || size == 0)
		return(NULL);

	return (c);
}

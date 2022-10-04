#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to be copied
 *
 * Return: a pointer to a duplicated string.
 * NULL if str = NULL or if insufficient memory was available.
 */
char *_strdup(char *str)
{
	char *string;
	int index, len = 0;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;

	string = malloc(sizeof(str) * (len +1));
	if (string == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		string[index] = str[index];
	
	string[len] = '\0';
	
	return (string);
}

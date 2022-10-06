#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenated two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes in second string to be concatenated
 *
 * Return: NULL if function fails, otherwise a pointer
 * to the newly allocated space which contains @s1 followed by
 * @n bytes of @s2.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_string;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int i;
	int concat_index = 0;

	for (i = 0; s1[i]; i++)
		len1++;

	for (i = 0; s2[i]; i++)
		len2++;

	if (n > len2)
		concat_string = malloc((sizeof(char) * len1) + len2 + 1);
	else
		concat_string = malloc((sizeof(char) * len1) + n + 1);

	if (concat_string == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat_string[concat_index++] = s1[i];

	if (n > len2)
	{
		for (i = 0; i < len2; i++)
			concat_string[concat_index++] = s2[i];
	}
	else
	{
		for (i = 0; i < n; i++)
			concat_string[concat_index++] = s2[i];
	}

	concat_string[concat_index] = '\0';

	return (concat_string);
}

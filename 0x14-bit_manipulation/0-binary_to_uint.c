#include "main.h"

int str_count(const char *str);

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a string of 0 and 1 chars
 *
 * Return: the converted number or
 * 0 if b is NULL or
 * if there is one or more chars in the string @b that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	int index;
	unsigned int doubler = 1;
	unsigned int conv = 0;

	if (b == NULL)
		return (0);

	for (index = str_count(b) - 1; index >= 0; index--)
	{
		if (b[index] == '1')
		{
			conv += doubler;
			doubler *= 2;
		}
		else if (b[index] == '0')
		{
			conv += 0;
			doubler *= 2;
		}
		else
			return (0);
	}

	return (conv);
}

/**
 * str_count - counts the number of characters in a string
 * @str: the string whose characters are to be counted
 *
 * Return: the number of characters in a string or
 * 0 if @str is NULL
 */
int str_count(const char *str)
{
	int count = 0;

	if (str == NULL)
		return (0);

	while (*str != '\0')
	{
		count++;
		str++;
	}

	return (count);
}

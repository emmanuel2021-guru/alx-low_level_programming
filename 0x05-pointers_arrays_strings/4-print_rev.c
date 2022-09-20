#include "main.h"

/**
 * print_rev - prints a string, in reverse,
 * followed by a new line.
 * @s: String to be reverse printed.
 */
void print_rev(char *s)
{
	int len = 0;
	int index = 0;

	while (s[index] != 0)
	{
		index++;
		len++;
	}

	for (index = len - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}

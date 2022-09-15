#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal.
 * @n - Number of times the \ character should be printed.
 */
void print_diagonal(int n)
{
	int len1, len2, spc;

	for (len1 = 0; len1 <= n; len1++)
	{
		if (len1 >= 1)
		{
			for (spc = 1; spc <= len1; spc++)
				_putchar(' ');
		}

		for (len2 = 0; len2 <= n; len2++)
			_putchar('\\');
	}
	_putchar('\n');
}

#include "main.h"

/**
 * main - prints the alphabet in lowercase, followed by a new line
 *
 * Return: always 0.
 */
void print_alphabet(void)
{
	int alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}

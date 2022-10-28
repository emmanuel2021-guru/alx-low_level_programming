#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number in question
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int result = 0, multiplier = 1;

	while (n > 1)
	{
		if (n & 1)
		{
			result += multiplier;
			multiplier *= 10;
		}

		else
			multiplier *= 10;

		n = n >> 1;
	}

	if (n & 1)
	{
		result += multiplier;
		multiplier *= 10;
	}
	else
		multiplier *= 10;

	printf("%lu", result);
}

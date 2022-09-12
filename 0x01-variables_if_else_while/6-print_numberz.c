#include <stdio.h>
#include <ctype.h>

/**
 * main - holds the main block of code
 *
 * Return: signifies end of code
 */
int main(void)
{
	int n = 'F';

	while (n <= 'O')
	{
		putchar((n % 10) + '0');
		n++;
	}
	putchar('\n');
	return (0);
}

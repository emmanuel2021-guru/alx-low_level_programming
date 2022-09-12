#include <stdio.h>
#include <ctype.h>

/**
 * main - holds the main block of code
 *
 * Return: signifies end of code
 */
int main(void)
{
	int n = '@';

	while (n <= 'I')
	{
		putchar(n % 10);
		n++;
	}
	putchar('\n');
	return (0);
}

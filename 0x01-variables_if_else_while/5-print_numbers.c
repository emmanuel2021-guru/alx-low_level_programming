#include <stdio.h>
#include <ctype.h>

/**
 * main - holds the main block of code
 *
 * Return: signifies end of code
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		printf("%d", n);
		n++;
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
#include <ctype.h>

/**
 * main - holds the main line of code
 *
 * Return: signifies end of code
 */
int main(void)
{
	int x = 'Z';

	while (x >= 'A')
	{
		putchar(tolower(x));
		x--;
	}
	putchar('\n');
	return (0);
}

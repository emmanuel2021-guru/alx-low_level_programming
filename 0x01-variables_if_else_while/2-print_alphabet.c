#include <stdio.h>
#include <ctype.h>

/**
 * main - holds the main block of code
 *
 * Return: Signifies end of code
 */
int main(void)
{
	int x = 'A';

	while (x <= 'Z')
	{
		putchar(tolower(x));
		x++;
	}
	putchar('\n');
	return (0);
}

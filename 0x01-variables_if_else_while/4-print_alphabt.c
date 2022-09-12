#include <stdio.h>
#include <ctype.h>

/**
 * main - holds the main block of code
 *
 * Return: signifies end of code
 */
int main(void)
{
	int x = 'A';

	while (x <= 'Z')
	{
		if (x != 'E' && x != 'Q')
			putchar(tolower(x));
		x++;
	}
	putchar('\n');
	return (0);
}

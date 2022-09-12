#include <stdio.h>
#include <ctype.h>

/**
 * main - the main block of code
 *
 * Return: signifies end of code
 */
int main(void)
{
	int x = 'A';

	while (x <= 'Z')
	{
		putchar(tolower(x));
		x++;
	}
	x = 'A';

	while(x <= 'Z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}

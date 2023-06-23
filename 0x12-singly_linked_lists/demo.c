#include <stdio.h>
#include <stdlib.h>

/**
 * main - this is a demo
 *
 * Return: Always 0
 */
int main(void)
{
	int a = 5;
	int *p = &a;
	int **pp = &p;

	printf("%d\n", a);
	printf("%d\n", *p);
	printf("%d\n", **pp);

	return (0);
}

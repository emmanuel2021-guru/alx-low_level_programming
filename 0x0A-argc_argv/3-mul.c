#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the multiplication of two numbers
 * @argc: Number of arguments supplied
 * @argv: array of pointers to arguments.
 *
 * Return: 0 if program receives two arguments
 * 1 otherwise.
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}

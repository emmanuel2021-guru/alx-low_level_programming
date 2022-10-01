#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the addition of positive numbers
 * @argc: The number of arguments supplied
 * @argv: array to the pointers of arguments
 *
 * Return: 0 if all arguments are digits
 * 1 Otherwise
 */
int main(int argc, char *argv[])
{
	int i, sum = 0, count = 0;

	for (i = 1; i < argc; i++)
	{
		if (*argv[i] >= '0' && *argv[i] <= '9')
		{
			sum += atoi(argv[i]);
			count++;
		}
		else
		{
			break;
		}
	}

	if (count == argc - 1)
	{
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}

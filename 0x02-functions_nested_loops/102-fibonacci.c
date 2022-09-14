#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2,
 * followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	int count = 0;
	unsigned long fib1 = 0, fib2 = 1, sum;

	while (count < 50)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");

		count++;
	}
	return (0);
}

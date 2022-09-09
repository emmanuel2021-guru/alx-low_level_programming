#include <stdio.h>
#include <time.h>

/**
 * main - my main code goes here
 *
 * Return: signifies end of program
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0) {
		printf("%d is positive\n", n);
	} else if (n == 0) {
		printf("%d is zero\n", n);
	} else {
		printf("%d is negative\n", n);
	}
}

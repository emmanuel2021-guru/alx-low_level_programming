#include <stdio.h>

/**
 * main - Prints the number of arguments passed into the program
 * @argc: Number of arguments passed into the program
 * @argv: array of pointers to the arguments
 *
 * Return: always 0
 */
int main(int argc, char __attribute__((__unused__)) argv)
{
	printf("%s\n", argc);

	return (0);
}

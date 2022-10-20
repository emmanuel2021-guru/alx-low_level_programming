#include "function_pointers.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: a list of type of arguments passed into the function
 * c - char
 * i - integer
 * f - float
 * s - char *(if the string is NULL print (nil) instead.
 *
 * Return: Nothing.
 */
void print_all(const char * const format)
{
	/*va_list any;*/
	int length = 0;
	int index = 0;

	while (format[index] != '\0')
	{
		printf("%c\n", format[index]);
		length++;
		index++;
	}
}

int main(void)
{
	print_all("ffed");

	return (0);
}

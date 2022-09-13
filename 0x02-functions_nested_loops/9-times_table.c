#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int num = 0;
	int prod;

	while (num <= 9)
	{
		int mult = 1;

		_putchar('0');

		while (mult <= 9)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * mult;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');

			_putchar((prod % 10) + '0');
			mult++;
		}
		num++;
		_putchar('\n');
	}
}

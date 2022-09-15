#include "main.h"

/**
 * more_numbers - Prints numbers 0 to 14, 10 times.
 */
void more_numbers(void)
{
	int new_line, num;

	for (new_line = 0; new_line <= 9; new_line++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
				_putchar((num / 10) + '0');
			_putchar(num + '0');
		_putchar('\n');
	}
}

#include <stddef.h>
#include <stdio.h>
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump Search Algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in @array
 * @value: value to search for
 *
 * Return: the first index where value is located otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t j_step = sqrt(size);

	if (array != NULL)
	{
		while (value > array[i] && i <= size)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			i += j_step;
		}
		printf("Value found between indexes [%lu] and [%lu]\n", (i - j_step), i);
		for (i -= j_step; i <= (i + j_step) && i < size; i++)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			if (array[i] == value)
			{
				return (i);
			}
		}
		return (-1);
	}
	else
		return (-1);
}

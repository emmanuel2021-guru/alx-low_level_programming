#include <stddef.h>
#include <stdio.h>

/**
 * interpolation_search - searches for a value in a sorted array
 * of integers using the Interpolation Search Algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in @array
 * @value: the value to search for
 *
 * Return: the first index where value is located otherwise -1
 * if the value is not present in array or if array is NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos;

	if (array != NULL)
	{
		while (low <= high)
		{
			pos = low + (((double)(high - low) / (array[high] -
					array[low])) * (value - array[low]));
			if (pos > (size - 1))
			{
				printf("Value checked array[%lu] is out of range\n", pos);
				return (-1);
			}
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
			if (array[pos] == value)
			{
				return (pos);
			}
			else if (array[pos] > value)
			{
				high = pos - 1;
			}
			else
				low = pos + 1;
		}

		return (-1);
	}
	else
		return (-1);
}

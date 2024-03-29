#include <stddef.h>
#include <stdio.h>

/**
 * linear_search - searches for a value in an array of integers
 * using the Linear Search Algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in @array
 * @value: value to search for
 *
 * Return: -1 if value is not present in array or if array is NULL
 * otherwise return the first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
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

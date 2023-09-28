#include <stdio.h>
#include <stddef.h>

/**
 * binary_search - searches for a value in a sorted array of
 * integers using the Binary Search Algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in @array
 * @value: value to search for
 *
 * Return: index whers value is located otherwise -1 if value is
 * not present in array or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t left_i;
	size_t right = size - 1;
	size_t middle;

	if (array != NULL)
	{
		while (left <= right)
		{
			middle = (left + right) / 2;

			if (right == 0)
				printf("Searching in array: %d\n", array[0]);
			else
			{
				printf("Searching in array: ");
				for (left_i = left; left_i < right; left_i++)
				{
					printf("%d, ", array[left_i]);
				}
				printf("%d\n", array[left_i]);
			}
			if (array[middle] == value)
			{
				return (middle);
			}
			else if (array[middle] < value)
			{
				left = middle + 1;
			}
			else
			{
				right = middle - 1;
			}
		}

		return (-1);
	}
	else
		return (-1);
}

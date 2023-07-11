#include <stdio.h>

/**
 * linear_search - searches through an array
 * @array: array to search
 * @size: the size of the array
 * @value: value to search
 * Return: the first index or -1 if not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			return (i);
		}
		else
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		}

	}
	return (-1);
}

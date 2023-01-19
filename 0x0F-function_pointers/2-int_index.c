#include "function_pointers.h"

/**
 * int_index - function returns index of value
 * @array: pointer to an array
 * @size: size of array
 * @cmp: pointer to function that compares
 *
 * Return: returns the index of the value
 */


int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
	for (i = 0; i < size; i++)
	{
	if (cmp(array[i]))
	return (i);
	}
	}
	return (-1);
}

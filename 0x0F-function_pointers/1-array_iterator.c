#include "function_pointers.h"

/**
 * array_iterator - array iteration
 * @array: array to be iterated
 * @size: an unsigned integer data type which can assigned 0 and more
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if ((array == NULL || action  == NULL) || size <= 0)
	exit(98);

	for (i = 0; i < size; i++)
	{
	action(array[i]);
	}

}

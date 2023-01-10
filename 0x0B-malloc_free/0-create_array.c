#include "main.h"

/**
 * *create_array - creates an array of chars, and initializes
 * it with specific character
 *
 * @size: size of the array
 * @c: constant character
 * Return: pointer to array of characters
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
	return (NULL);

	}
	array = malloc(sizeof(char) * size);

	for (i = 0; i <= size; i++)
	{
	*(array + i) = c;
	}
	return (array);

}













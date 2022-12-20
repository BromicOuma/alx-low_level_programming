#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to integer a
 * @b: pointer to integer b
 * Return: Returns nothing
 */

void swap_int(int *a, int *b)
{
	int temporary;

	temporary = *a;
	*a = *b;
	*b = temporary;

}

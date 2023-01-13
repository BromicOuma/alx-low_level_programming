#include "main.h"
#include <stdio.h>
/**
 * *malloc_checked - returns pointer to thw allocated memory
 * @b: size of allocated memory
 * Return: returns the pointer to void
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	exit(98);

	return (ptr);
}

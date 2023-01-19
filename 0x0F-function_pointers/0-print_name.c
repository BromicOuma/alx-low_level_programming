#include "function_pointers.h"

/**
 * print_name - function to print name
 * @name: input name
 * @f: pointer to function
 * Return: return nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	exit(98);

	f(name);
}

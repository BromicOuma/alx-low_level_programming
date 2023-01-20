#include "variadic_functions.h"

/**
 * print_strings - prints sring with separator
 * @separator: string of characters
 * @n: number of arguments
 * Returns: returns nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;

	if (n != 0)
	{
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
	s = va_arg(args, char*);
	s == NULL ? printf("%s", "(nil)") : printf("%s", s);

	if (i < n - 1)
	printf("%s", separator);
	}
	va_end(args);
	printf("\n");
	}

}

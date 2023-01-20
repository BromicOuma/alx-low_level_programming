#include "variadic_functions.h"

/**
 * sum_them_all - variadic function to get sum of all arguments
 * @n: number of arguments
 * Return: returns sum of all arguments passed to the function.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list args;

	if (n == 0)
	return (0);

	sum = 0;
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
	sum += va_arg(args, int);
	}
	return (sum);
}

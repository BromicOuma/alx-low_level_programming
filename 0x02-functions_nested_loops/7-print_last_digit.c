#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - prints the last digits of a number
 *
 * @n: the input number
 * Return: returns the last digit of the number
 */
int print_last_digit(int n)
{
	n = abs(n % 10);
	_putchar(n + '0');
	return (n);
}

#include "main.h"

/**
 * _pow_recursion - value of x raised to the power of y
 *
 * @x: base value
 * @y: value of the exponent
 *
 * Return: returnsan integer that which is the power of x raised to y
 */

int _pow_recursion(int x, int y)
{

	if (y == 0)
	return (1);

	if (y < 0)
	return (-1);

	return (x * _pow_recursion(x, y - 1));
}

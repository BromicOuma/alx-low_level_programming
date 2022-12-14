#include "main.h"

/**
 * _islower - checks whether a character is lowercase or uppercase
 * @c: The character to be checked
 *
 * Return: return 1 if character is lowercase, 0 if otherwise
 */

int _islower(int c)
{
	if ((c >= 98 && c <= 122) || (c >= 65 && c <= 90))
	{
	return (1);
	}
	return (0);

}

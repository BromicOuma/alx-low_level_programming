#include "main.h"

/**
 * _islower - checks whether a character is lowercase or uppercase
 *
 * Return: return 1 if character is lowercase, 0 if otherwise
 */

int _islower(int c)
{
	char c;

	if( 'a' >= c && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}

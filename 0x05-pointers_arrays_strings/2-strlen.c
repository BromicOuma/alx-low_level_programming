#include "main.h"

/**
 * _strlen - function returns the length of a string
 *
 * @s: input string
 *
 * Return: Returns the length of the characters
 */

int _strlen(char *s)
{
	int counter = 1;

	while( *s  != '\0')
	{
	counter += 1;
	*s++;
	}
	return (counter);
}

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
	char ch = *s;
	int counter = 1;

	while( ch  != '\0');
	{
	counter += 1;
	ch++;
	}
	return (counter);
}

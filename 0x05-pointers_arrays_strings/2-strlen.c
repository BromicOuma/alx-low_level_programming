#include "main.h"

/**
 * _strlen - lenght of string
 *
 * @s: the input string
 * Return: Returns the length of the string
 */

int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}

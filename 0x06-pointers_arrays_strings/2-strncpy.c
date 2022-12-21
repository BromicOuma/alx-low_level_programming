#include "main.h"

/**
 * _strncpy - functions that copy a string
 *
 * stpncpy, strncpy — copy fixed length string, returning a pointer
 * @dest: destination pointer of type character
 * @src: source character pointer of type character
 * @n: size of source in bytes
 * Return: Returns the copied string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0', i++)
	{
	dest[i] = src[i];
	}
	for (; i < n; i++)
	{
	dest[i] = '\0';
	}
	return (dest);
}


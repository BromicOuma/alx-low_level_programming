#include "main.h"

/**
 * _strncpy - functions that copy a string
 * stpncpy, strncpy — copy fixed length string, returning a pointer
 * @dest: destination pointer of type character
 * @src: source character pointer of type character
 * @n: size of source in bytes
 * Return: Returns the copied string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (src[b])
	{
		b++;
	}

	while (a < n && src[a])
	{
		dest[a] = src[a];
		a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}

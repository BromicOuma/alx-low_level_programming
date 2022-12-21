#include "main.h"

/**
  * _strncat - Concatenates two strings
  * @dest: The destination pointer address
  * @src: The source pointer address
  * @n: The limit of the concatenation
  *
  * Return: A pointer to the resulting string dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int k;
	int j;

	j = 0;
	k = 0;
	while (dest[k])
	{
		k++;
	}

	while (j < n && src[j])
	{
		dest[k] = src[j];
		k++;
		j++;
	}

	dest[k + n + 1] = '\0';

	return (dest);
}

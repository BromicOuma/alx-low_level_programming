#include "main.h"

/**
 * *str_concat - concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 *
 * Return: The address to the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k, l;
	char *cat;

	if (s1 == NULL || s2 == NULL)
	return ('\0');

	i = 0;
	while (s1[i] != '\0')
	{
	i++;
	}

	j = 0;
	while (s2[j] != '\0')
	{
	j++;
	}

	k = i + j;
	cat  = malloc(sizeof(char) * k);
	if (cat == NULL)
	return (NULL);

	j = 0;
	l = 0;
	while (l < k)
	{
	if (l <= i)
	{
	cat[l] = s1[l];
	}

	if (l >= i)
	{
	cat[l] = s2[j];
	j++;
	}
	l++;
	}
	cat[l] = '\0';
	return (cat);

}

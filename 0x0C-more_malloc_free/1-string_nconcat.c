#include "main.h"

/**
 * string_nconcat - concatenate n charcter of s2 to s1
 * @n: number of characters
 * @s1: first string
 * @s2: second string
 * Return: return the address of the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, l;
	char *cat;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
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
	if (n >= j)
		k = i + j + 2;
	if (n < j)
		k = i + n + 1;
	cat = malloc(sizeof(char) * k);

	j = 0;
	l = 0;
	while (l < k)
		{
		if (l <= i)
			{
			cat[l] = s1[l];

			}

		if (l > i)
			{
			cat[l] = s2[j];
			j++;
			}
		l++;
		}
	cat[l] = '\0';
	return (cat);
}












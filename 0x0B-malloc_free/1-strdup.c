#include "main.h"

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * @str: address of character string
 * Return: pointer to new string
 */
char *_strdup(char *str)
{
	int i, l;
	char *ch;

	if (str == NULL)
	return (NULL);
	l = 1;
	i = 0;
	while (str[i] != '\0')
	{
	l = l + i;
	i++;
	}
	ch = malloc(sizeof(char) * l);
	for (i = 0; i <= l; i++)
	{
	ch[i] = str[i];
	}
	ch[i] = '\0';
	return (ch);
}

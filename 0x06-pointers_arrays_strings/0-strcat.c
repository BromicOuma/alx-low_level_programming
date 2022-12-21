#include "main.h"

/**
 * _strcat -  function to concatenate two strings
 * @dest: destination, will hold the concatenated string
 * @src: source string
 * Return: Returns the concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;
	char *cat;

	i = 0;
	j = 0;
	while( *(dest + i) != '\0')
	{
	*(cat + j) = *(dest + i);
	i++;
	j++;
	}
	i = 0;
	while( *(src + i) != '\0')
	{
	*(cat + j) = *(src + i);
	j++;
	i++;
	}
	*(cat + j) = '\0';
	return (cat);
}

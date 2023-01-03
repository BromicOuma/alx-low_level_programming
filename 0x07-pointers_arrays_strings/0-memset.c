#include <main.h>

/**
 * *_memset -  fills the first n bytes of the memory area pointed to by s
 * with the constant byte b
 *
 * @s: pointer to the character
 * @n: bytes of character to be replaced
 * @b: the character to replace the sppeficied bytes n
 *
 * Return: the pointer to thereplaced character
 */

char *_memset(char *s, char b, unsigned int n);
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	s[i] = b;
	}
	return (s);
}

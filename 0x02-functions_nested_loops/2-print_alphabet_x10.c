#include "main.h"
/**
 * print_alphabet_x10 - function that prints the alphabet 10 times
 *
 * Return: return void
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	i = 1;
	while (i <= 10)
	{
	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	i++;
	}


}

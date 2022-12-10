#include<stdio.h>

/**
 * main - where the main program execution begans
 *
 * This main function prints all the digits of base 16, hexadecimal
 *
 * Return: The function returns success and exits.
 */
int main(void)
{
	int i;
	char ch;

	for (i = 0; i < 10; i++)
	{
	putchar(i + '0');
	}
	for (ch = 'a'; ch < 'g'; ch++)
	{
	putchar(ch);
	}
	putchar('\n');
	return (0);
}

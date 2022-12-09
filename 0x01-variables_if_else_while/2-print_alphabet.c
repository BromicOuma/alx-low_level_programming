#include<stdio.h>

/**
 * main - main function where every program execution begins
 *
 * The function prints characters from a to z  all in lowercase
 *
 * Return: returns success and exits
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	putchar(c);
	}
	putchar('\n');
	return (0);
}

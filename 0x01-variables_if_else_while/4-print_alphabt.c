#include<stdio.h>

/**
 * main - main function where every program execution begins
 *
 * The function prints characters from a to z  all in lowercase
 * with exception of q and e
 * Return: returns success and exits
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z';)
	{
	if (c == 'q' || c == 'e')
	{
	c++;
	}
	else
	{
	putchar(c);
	c++;
	}
	}
	putchar('\n');
	return (0);
}

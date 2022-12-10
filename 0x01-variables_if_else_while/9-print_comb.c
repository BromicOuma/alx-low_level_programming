#include<stdio.h>

/**
 * main - main function where every program execution begins
 *
 * The function prints real number from 0 to 9
 *
 * Return: returns success and exits
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
	putchar(i + '0');

	if (i != 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}

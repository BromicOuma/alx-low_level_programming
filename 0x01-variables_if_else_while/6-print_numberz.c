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
	int c;
	
	for(c = 0; c <= 9; c++)
	{
	putchar(c + '0');
	}

	putchar('\n');
	return (0);
}

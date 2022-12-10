#include<stdio.h>

/**
 * main - The main program execution starting point
 *
 * Program prints lower case alphabets in reverse order i.e z-a
 *
 * Return: returns success on succesful program execution
 *
 */
int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a' ; ch--)
	{
	putchar(ch);
	}
	putchar('\n');
	return (0);
}


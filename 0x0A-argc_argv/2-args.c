#include "main.h"

/**
 * main - prints argument each line
 *
 * @argc: argument count
 * @argv: the arguments
 * Return: returns 0 for successful execution.
 */

int main(int argc, char **argv)
{
	int i, n;

	n = argc;
	for (i = 0; i < n; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}

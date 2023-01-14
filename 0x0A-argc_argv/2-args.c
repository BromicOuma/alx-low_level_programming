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
	int i;

 	for (i = 0; i < argc; i++)
	{
	printf("%s\n",argv[i]);
	}
	return (0);
}

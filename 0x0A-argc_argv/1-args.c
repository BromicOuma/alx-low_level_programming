#include "main.h"

/**
 * main - function taking commandline parameters
 *
 * @argc: count of arguments
 * @argv: pointer to array of charactersss
 * Return: returns success
 */

int main(int argc, char **argv)
{
	(void) **argv;
	printf("%d\n", argc - 1);
	return (0);
}

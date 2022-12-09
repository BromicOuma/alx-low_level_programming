#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - the main function,program execution begins here
 *
 * The function generates random number
 *
 * Return: returns success for the correct execution
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
	printf("%d is negative\n", n);
	}
	else
	{
	printf("%d is zero\n", n);
	}

	return (0);
}

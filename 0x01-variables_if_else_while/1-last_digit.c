#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - the main function,program execution begins here
 *
 * The function returns the last number of a digit
 *
 * Return: returns success for the correct execution
 */
int main(void)
{
	int n;
	int lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;
	/* your code goes there */
	if (lastd > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, lastd);
	}
	else if (lastd == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, lastd);
	}
	else if (lastd != 0 && lastd < 6)
	{
	printf("Last digit of %d is %d and is less than 6 and not zero\n", n, lastd);
	}

	return (0);
}

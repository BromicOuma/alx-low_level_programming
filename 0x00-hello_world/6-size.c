#include<stdio.h>

/**
 * main - program exeution starts at this point
 *
 *  Size of datatypes of compiled and run on.
 *
 * Return: It returns zero for successful program execution
*/
int main(void)
{
	printf("Size of a char: %d\n byte(s)", (int)sizeof(char));
	printf("Size of an int: %d\n byte(s)", (int)sizeof(int));
	printf("Size of a long int: %d\n byte(s)", (int)sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", (int)sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", (int)sizeof(float));

	return (0);
}

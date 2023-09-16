#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This is the main function.
 * It prints a message using the printf function.
 *
 * Return: 0 (indicating successful execution)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;


	/*check the boolean condition*/
	if (n > 0)
	{
	/*if n is greater than zero print*/
		printf("%d is positive\n", n);
	} else if  (n == 0)
	{
	/* if n is equal to zero print*/
		printf("%d is zero\n", n);
	} else if (n < 0)
	{
	/* if n is less than zero print*/
		printf("%d is negative\n", n);
	}
	return (0);
}

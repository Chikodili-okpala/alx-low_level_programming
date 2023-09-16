#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the sizes of various data types.
 *
 * Return: Always 0 (indicating successful execution)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/*check the boolean condition*/
	if (n > 5)
	{
	/*if n is greater than five print*/
		printf("Last digit of %d is and is greater than 5\n", n)
	} else if (n == 0)
	{
	/*if n is equal to zero print*/
		printf("Last digit of %d is and is 0\n", n)
	} else if (n < 6)
	{
	/*if n is less than six and not zero print*/
		printf("Last digit of %d is and is less than 6 and not 0\n", n)
	}
	return (0);
}

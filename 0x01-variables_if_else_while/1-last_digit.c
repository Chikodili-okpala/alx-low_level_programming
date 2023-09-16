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
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/*Last digit of n calculation*/
	int lastDigit = n % 10;

	/*check the boolean condition*/
	if (lastDigit > 5)
	{
	/*if n is greater than five print*/
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	} else if (lastDigit == 0)
	{
	/*if n is equal to zero print*/
		printf("Last digit of %d is %d and is 0\n", n, lastDigit);
	} else if (lastDigit < 6)
	{
	/*if n is less than six and not zero print*/
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
	}
	return (0);
}

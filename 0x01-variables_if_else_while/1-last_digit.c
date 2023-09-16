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

	/*last digit of n calculation*/
	lastDigit = n % 10;

	/*prints the value of last digit*/
		printf("Last digit of %d is %d ", n, lastDigit);

	/*check the boolean condition*/
	if (lastDigit > 5)
	{
	/*if n is greater than five print*/
		printf("and is greater than 5\n");
	} else if (lastDigit == 0)
	{
	/*if n is equal to zero print*/
		printf("and is 0\n");
	} else if (lastDigit < 6)
	{
	/*if n is less than six and not zero print*/
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}

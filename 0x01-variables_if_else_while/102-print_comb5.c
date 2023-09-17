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
	int m;
	int n;

	for (m = 0; m < 99; m++)
	{
	for (n = m + 1; n < 99; n++)
	{
	/*prints the 1st digit which is less than 10*/
		putchar((m / 10) + '0');
		putchar((m % 10) + '0');
	/*adds a space to separate the 1st digit from the 2nd digit*/
		putchar(' ');
	/*prints the 2nd digit which is less than 10*/
		putchar((n / 10) + '0');
		putchar((n % 10) + '0');

	if (m < 98)
	{
	/*adds , then  if the number is less than 98*/
		putchar(',');
		putchar(' ');
	}
	}
	}
	/*prints a new line at the end of the last number*/
	putchar('\n');

	return (0);
}


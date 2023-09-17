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

	for (n = 0; n <= 9; n++)
	{
	/*prints the numbers*/
		putchar(n + '0');
	if (n < 9)
	{
		putchar(',');
		putchar(' ');
	} else
	{
		putchar('\n');
	}
	}

	return (0);
}

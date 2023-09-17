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
	int m, n;

	for (m = 0; m <= 9; m++)
	{
	for (n = 0; n <= 9; n++)
	{
	/*prints the combination*/
		putchar(m);
		putchar(n);

	if (m != 9 || n != 9)
	{
		putchar(',');
		putchar(' ');
	
	}
	}
	}

	return 0;
}

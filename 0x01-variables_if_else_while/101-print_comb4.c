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
	int o;

	for (m = 0; m < 8; m++)
	{
	for (n = m + 1; n < 9; n++)
	{
	for (o = n + 1; o < 10; o++)
	{
	/*prints unique combo of 3 digits*/
		putchar(m + '0');
		putchar(n + '0');
		putchar(0 + '0');
	if (m < 7)
	{
	/*prints , then */
		putchar(',');
		putchar(' ');
	}
	}
	}
	}
	/*prints new line*/
	putchar('\n');

	return (0);
}

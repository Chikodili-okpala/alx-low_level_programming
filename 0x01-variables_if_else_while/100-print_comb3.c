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
	for (int m = 0; m < 9; m++)
	{
        for (int n = m + 1; n < 10; n++)
	{
	/*prints the unique combo of the 2 digits*/
		putchar(m + '0');
		putchar(n + '0');
	if (m < 8 || n < 9)
	{
		putchar(',');
		putchar(' ');
	}
	}
	}
	putchar('\n');

	return 0;
}

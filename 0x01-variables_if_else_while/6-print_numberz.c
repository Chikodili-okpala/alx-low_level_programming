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

	for (n = 0; n <=9; n++)
	{
	/*prints the digit as a letter*/
		putchar(n + '0');
	}
	/*prints a new line*/
	putchar('\n');

	return (0);

}

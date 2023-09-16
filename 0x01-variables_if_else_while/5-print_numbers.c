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

	/*initialize n to 0*/
	for (n = 0; n <= 9; n++)
	{
	/*prints the digits as character*/
		putchar(n + '0');
	}
	/*prints new line after the single digits*/
	putchar('\n');

	return (0);

}

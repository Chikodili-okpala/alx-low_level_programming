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
	char letter;
	int n;

	for (n = 0; n <= 10; n++)
	{
		letter = '0' + n;
	/*Converts integer n to its character representation*/
		putchar(letter);
	}

	for (n = 0; n < 6; n++)
	{
		letter = 'a' + n;
	/*prints alphabets from a to f*/
		putchar(letter);
	}

	/*prints new line*/
	putchar('\n');

	return (0);
}

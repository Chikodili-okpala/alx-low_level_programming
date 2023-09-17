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
	for (letter = 'z'; letter >= 'a'; letter--)
	{
	/*prints the alphabets in reverse or descending order*/
		putchar(letter);
	}

	/*prints new line*/
	putchar('\n');

	return (0);

}

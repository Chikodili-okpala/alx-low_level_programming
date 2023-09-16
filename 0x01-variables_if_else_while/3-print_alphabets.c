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

	/*prints lowercase letters*/
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	/*prints uppercase letters*/
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}
	/*prints new line*/
	putchar('\n');

	return (0);


}

#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets in lowe case
 *
 * Return: Always 0 on successful execution
 */
void print_alphabet_x10(void)
{
	/*initializes p and q*/
	int p;
	int q;

	/*loop q through p*/
	for (p = 1; p <= 10; p++)
	{
		for (q = 'a'; q <= 'z'; q++)
		{
		/*prints a to z 10x*/
		_putchar(q);
		}
	/*adds a new line character*/
	_putchar('\n');
	}
}


#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets in lowe case
 *
 * Return: Always 0 on successful execution
 */
void print_alphabet_x10(void)
{
	int p;
	int q;

	for (q = 1; p <= 10; p++)
	{
		for (q = 'a'; q <= 'z'; q++)
		{
		_putchar(q);
		}
	_putchar('\n');
	}
}


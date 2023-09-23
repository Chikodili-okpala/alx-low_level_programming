#include "main.h"

/**
 * print_alphabet - prints alphabets in lowe case
 *
 * Return: Always 0 on successful execution
 */
void print_alphabet(void)
{
	int p;

	for (p = 97; p <= 122; p++)
	{
		_putchar(p);
	}
	_putchar('\n');
}

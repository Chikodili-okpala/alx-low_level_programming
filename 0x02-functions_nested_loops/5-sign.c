#include "main.h"

/**
 * print_sign - checks the sign of the alphabet
 * @n: the integer to be checked
 *
 * Return: returns 1 if n>0, 0 if n=0 and -1 if n<0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');

}


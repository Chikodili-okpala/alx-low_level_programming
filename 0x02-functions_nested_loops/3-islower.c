#include "main.h"

/**
 * _islower - prints alphabets in loweceeease
 * @c: the integer to be checked if it is in lowercase or not
 *
 * Return: returns 1 if c is lowercase or 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

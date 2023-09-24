#include "main.h"

/**
 * print_last_digit - prints the last digit of an int
 * @p: the int that the last digit will be printed
 *
 * Return: returns the last last digit
 */
int print_last_digit(int p)
{
	int lastDigit;

	lastDigit = p % 10;
	if (lastDigit > 0)
	{
		_putchar(lastDigit + 48);
		return (lastDigit);
	}
	else
	{
		_putchar(-lastDigit + 48);
		return (-lastDigit);
	}
}


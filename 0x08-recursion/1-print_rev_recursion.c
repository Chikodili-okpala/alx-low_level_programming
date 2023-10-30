#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse order
 *
 * @s: pointer to the string to be printed in reverse
 */
void _print_rev_recursion(char *s)
{
	/*Check if the current character is the null terminator*/
	if (*s == '\0')
	{
		/*If yes, print a newline character*/
		_putchar('\n');
		return;
	}

	/*Print the current character*/
	_putchar(*s);
	/*If the next character is not the null terminator*/
		if (*(s + 1) != '\0')
		{
		/*Recursively call the function with the next character*/
		_print_rev_recursion(s + 1);
		}
		else
		{
			/*Print a newline when reaching the end of the string*/
			_putchar('\n');
		}
}

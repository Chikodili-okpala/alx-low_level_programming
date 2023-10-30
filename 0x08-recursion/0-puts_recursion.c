#include "main.h"

/**
 * _puts_recursion - prints a string
 *
 * @s: variable or memory location within _puts_recursion function
 * Return: 0 on successful execution
 */
void _puts_recursion(char *s)
{
	/*Check if the current character is the null terminator*/
	if (*s == '\0')
	{
		/*If yes, print a newline character*/
		putchar('\n');
		return;
	}

	/*Print the current character*/
	putchar(*s);
	/*Recursively call the function with the next character in the string*/
	_puts_recursion(s + 1);
}

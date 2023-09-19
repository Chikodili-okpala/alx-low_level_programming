#include <stdio.h>

/**
*_puts - returns the length of a string
*@str: a pointer to the string
*
* Description: This function takes a pointer to a string - character array,
* as it's parameter and prints it to the standard output (stdout), followed
* by a newline.
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
	putchar(*str);
	str++;
	}

	putchar('\n');
}


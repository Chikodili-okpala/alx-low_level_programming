#include <stdio.h>

/**
* print_rev - Prints a string in reverse followed by a new line
* @s: A pointer to the string to be printed in reverse
*
* Description: This function takes a pointer to a string - character *array
* and prints it in reverse order to the standard output (stdout), *followed
* by a newline
*/
void print_rev(char *s)
{
	int length = 0;
	int i;

	while (s[length] != '\0')
	{
	length++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}

	putchar('\n');
}


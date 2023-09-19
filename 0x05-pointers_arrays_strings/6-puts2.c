#include <stdio.h>

/**
* puts2 - Prints every other character of a string followed by a new line
* @str: A pointer to the string to be printed
*
* Description: This function takes a pointer to a string - character array
* and prints every other character, starting with the first character,
* followed by a newline
*/
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
	/*increments by 2 to skip every other character*/
 		i += 2;
	}

	/*prints a newline character to complete the line*/
	putchar('\n');
}


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
	int n = 0;

	while (str[n] != '\0')
	{
		putchar(str[n]);
	/*increments by 1 to move to the next character*/
	n++;

	if (str[n] == '\0')
	/*breaks if it reaches the end of the string*/		
	break;
	}

	/*prints a newline character to complete the line*/
	putchar('\n');
}


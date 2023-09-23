#include "main.h"
#include <ctype.h>

/**
* string_toupper - changes lowercase letters to uppercase
* @q: a pointer to a string - array of characters
*
* Description: this function changes lowercase letters to uppercase
*
* Return - return a pointer to q on successful execution
*/
char *string_toupper(char *q)
	int o;
{
	/*iterates through the string until the null terminator is met*/
	while (q[o] != '\0')
	{
	/*checks if the character is lowercase*/
	if (islower(q[o]))
	{
	/*converts it to uppercase*/
	q[o] = toupper(q[o]);
	}
	/*moves on to the next character*/
	o++;
	}

	/*returns the pointer to to the changed strng*/
	return (q);
}


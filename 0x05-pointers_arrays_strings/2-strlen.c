#include <stdio.h>

/**
*_strlen - returns the length of a string
*@s: a pointer to the string
*
* Description: This function takes a pointer to a character -string,
* as it's parameter, calculates it's length and return the value
*
*Return: The length of the string
*/
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
	length++;
	s++;
	}

	return (length);

}


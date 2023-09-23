#include "main.h"

/**
* _strcmp - compares the content of two strings
* @s1 - the first string that will be compared with s2
* @s2 - the second string that will be compared with s1
* Return:
*	0 if both strings are equal
*	a negative value if s2 is greater than s1
*	a positive value if s2 is less than s1
*/
int _strcmp(char *s1, char *s2)
{
	/*loops through the chars of s1 and s2*/
	while (*s1 != '\0' && *s2 != '\0')
	{
	if (*s1 != *s2)
	{
		return (*s1 - *s2);
	}
	s1++;
	s2++;
	}

	/*at the end of the loop, checks for equality*/
	return (*s1 - *s2);
}

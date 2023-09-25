#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
* @s: the string to search within
 * @accept: the string containing characters to match
 *
 * Return: the num of bytes in the initial part of s
 *  which consist of bytes only from string - accept
 */
unsigned int _strspn(char *s, char *accept)
{
	/*intialize the length to 0 to count matching characters*/
	unsigned int length = 0;
	/*indicates whn a match is found*/
	int match;
	int p;

	/*loops until the end of the string s is reached*/
	while (*s)
	{
		match = 0;

		for (p = 0; accept[p]; p++)
		{
			if (*s == accept[p])
			{
				match = 1;
				break;
			}
		}
		if (match)
		{
			length++;
			s++;
		}
		else
		{
			break;
		}
	}

	return (length);
}



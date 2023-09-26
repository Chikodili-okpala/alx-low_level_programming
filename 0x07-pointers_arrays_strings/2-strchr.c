#include "main.h"
#include <stddef.h>

/**
 * _strchr - returns pointer to the 1st occurence of the character c
 * in the string s
 * @s: string value
 * @c: character occurence
 *
 * Return:  a pointer to c
 */
char *_strchr(char *s, char c)
{
	unsigned int p;

	/*checks for NULL pointer*/
	if (s == NULL)
	{
	return (NULL);
	}

	/*loops to check for c char in the string s*/
	for (p = 0; s[p] != '\0'; p++)
	{
		if (s[p] == c)
		{
		/**
		 * returns a pointer to the first occurrence
		 * of the character c in the string s
		 */
		return (&(s[p]));
		}
	}
	/**
	 * If character c is not found and c is '\0',
	 * return a pointer to the null terminator
	 */
	if (c == '\0')
	{
		return (&(s[p]));
	}

	/*if c is not found, return NULL*/
	return (NULL);

}


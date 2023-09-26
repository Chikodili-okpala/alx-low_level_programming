#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring within a string
 * @haystack: the string to searc inside
 * @needle: the substring to find
 *
 * Return: a pointer to the beginning of the located
 * substring in haystack, or NULL if the substring is
 * not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack)
	{
		h = haystack;
		n = needle;

		while (*n && (*h == *n))
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return (NULL);


}


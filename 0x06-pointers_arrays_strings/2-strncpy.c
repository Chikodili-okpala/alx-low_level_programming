#include "main.h"

/**
*_strncpy - copies the content of a char variable to another and
* adds null terminator the resulting string
* @dest: destination string to which @src will be copied to
* @src: source string that will be copied to @dest
* @n: nth length of the dest string
*
* Return - always returns return a pointer to dest on successful execution
*/
char *_strncpy(char *dest, char *src, int n)
{
	int p;

	for (p = 0; p < n && src[p] != '\0'; p++)
	{
	dest[p] = src[p];
	}

	/*adds null terminator the resulting string, dest*/
	dest[p] = '\0';

	/*
	*returns the pointer to dest string after copying
	*from the src string
	*/
	return (dest);

}


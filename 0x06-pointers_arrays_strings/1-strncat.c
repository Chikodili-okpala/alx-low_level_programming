#include "main.h"

/*
* _strncat - appends the content of a char variable to another
* at the n string length
*
* @dest: destination string to which @src will be appended
* @src: source string that will be appended to @dest
* Description: this function takes two pointers to strings and appends
* the content of @src to the n length of @dest and adds a null terminator
* to the resulting concatenated string (@dest)
*
* Return - returns the value of dest on successful execution
*/
char *_strncat(char *dest, char *src, int n)
{
	int p;
	int destlen = 0;

	/*finds the length of dest*/
	while (dest[destlen] != '\0')
	{
	destlen++;
	}

	/*appends 'n' characters from src to dest*/
	for (p = 0; p < n && src[p] != '\0'; p++)
	{
	dest[destlen + p] = src[p];
	}

	/*adds a null terminator to the combined string*/
	dest[destlen + p] = '\0';

	return (dest);


}


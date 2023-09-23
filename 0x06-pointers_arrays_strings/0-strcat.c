#include "main.h"

/* _strcat - concatenates 2 strings
* @dest: destination string to which @src will be appended
* @src: source string that will be appended to @dest
*
* Description: this function takes two pointers to strings and appends
* the content of @src to the end of @dest and adds a null terminator
* to the resulting concatenated string (@dest)
*
* Return - returns a pointer to dest on successful execution
*/
char *_strcat(char *dest, char *src)
{
	int p;
	/*find dest length*/
	int destlen = 0;

	while (dest[destlen] != '\0')
	{
	destlen++;
	}
	/*concatenates src to dest*/
	for (p = 0; src[p] != '\0'; p++)
	{
	dest[destlen + p] = src[p];
	}
	dest[destlen + p] = '\0';

	/*a pointer to the dest string is returned*/
	return (dest);


}


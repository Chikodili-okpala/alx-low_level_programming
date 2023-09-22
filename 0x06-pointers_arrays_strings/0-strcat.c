#include "main.h"

/*
* _strcat - appends the content of a char variable to another
*
* Return - returns a pointer to dest on successful execution
*/
char *_strcat(char *dest, char *src)
{
	int p;
	/*find dst length*/
	int destlen = 0;

	while (dest[destlen] != '\0')
	{
	destlen++;
	}
	/*Concatenates src to dest*/	
	for (p = 0; src[p] != '\0'; p++)
	{
	dest[destlen + p] = src[p];
	}
	dest[destlen + p] = '\0';

	return (dest);


}

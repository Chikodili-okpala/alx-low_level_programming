#include "main.h"
#include <stddef.h>

/**
 * _memcpy -copies n bytes from memory area src to memory area dest
 * with the constant byte b
 * @dest: destinatiom memory area that n bytes will be copied from
 * @src: source memory area that n bytes will be copied from
 * @n: num of bytes to be copied
 *
 * Return:  a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int p;

	/*checks for NULL pointer*/
	if (src == NULL || dest == NULL)
	{
	return (NULL);
	}

	/*loops to copy the memory area*/
	for (p = 0; p < n; p++)
	{
	dest[p] = src[p];
	}
	/*returns the pointer to the dest memory area*/
	return (dest);
}


#include "main.h"
#include <stddef.h>

/**
 * _memset -fills the 1st n bytes of the memory area pointed to by s
 * with the constant byte b
 * @s: pointer to the memory area to be filled
 * @b: te constant byte to fill the memory area with
 * @n: num of bytes to be filled
 *
 * Return:  a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int p;

	/*checks for NULL pointer*/
	if (s == NULL)
	{
	return (NULL);
	}

	/*loops to fill the memory area*/
	for (p = 0; p < n; p++)
	{
	s[p] = b;
	}

	/*returns the pointer to the filled memory area*/
	return (s);
}


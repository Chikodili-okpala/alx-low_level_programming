#include <stdio.h>

/**
*void reset_to_98 - set the integer pointed to 98
*@n: a pointer to the integer we want to set n to 98
*
* Description: This function takes a pointer to an integer as its parameter
* 		 and updates the value it points to by setting it to 98.
*/
void reset_to_98(int *n)
{
	*n = 98;
}


#include <stdio.h>

/**
*swap_int - set the int b
*@a: a pointer to the first integer we want to set
*@b: a pointer to the second integer we want to set
*
* Description: This function takes the pointers to an integer as its parameter
*and updates the value it points to by swapping it
*/
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;

}


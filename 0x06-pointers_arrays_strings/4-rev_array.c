#include "main.h"

/**
* reverse_array - reverses the content of an array of integers
* @a: an array of integers
* @n: the number of elements in the array
*
* Description: this function reverses the order of elements in the array a
*
* Return - return 0 on successful execution
*/
void reverse_array(int *a, int n)
{
	/*start index*/
	int start = 0;
	/*end index*/
	int end = n - 1;

	/*swaps the elements from strt and end towards the center*/
	while (start < end)
	{
	/*swaps a[start] and a[end]*/
	int tem = a[start];

	a[start] = a[end];
	a[end] = tem;

	/*shifts indices towards the center*/
	start++;
	end--;
	}
}


#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prrints the sum of the two diagonals of a square matrix
 * @a: pointer to the square matrix of integers
 * @size: size of the square matrix (num of rows or columns)
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int p;

	for (p = 0; p < size; p++)
	{
		sum1 += a[p * size + p];
		sum2 += a[p * size + (size - 1 - p)];
	}

	printf("%d, %d\n", sum1, sum2);

}


#include <stdio.h>

/**
*void reset_to_98 - set the integer pointed to 98
*@n: a pointer to the integer we want to set to 98
*/
void reset_to_98(int *n)
{
	*n = 98;
}

/**
*main - check the code
*
*Return: Always 0 (indicating successful execution)
*/
int main(void)
{
	int m = 70;
	int *n = &m;

		printf("Value of m before the call is %d\n", m);

	reset_to_98(n);

		printf("Value of m after the call is %d\n", m);

	return (0);
	
}


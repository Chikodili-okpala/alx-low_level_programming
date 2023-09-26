#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: array of characters to print
 *
 * Return:  0
 */
void print_chessboard(char (*a)[8])
{
	int  p, q;

	/*iterates through array of characters a*/
	for (p = 0; p < 8;  p++)
	{
		for (q = 0; q < 8; q++)
		{
			_putchar(a[p][q]);
		}
	_putchar('\n');
	}

}


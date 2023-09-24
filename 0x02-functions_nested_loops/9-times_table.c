#include "main.h"

/**
 * times_table - prints 9 times table
 */
void times_table(void)
{
	int m;
	int n;
	int result;

	for (m = 0; m <= 9; m++)
	{
		for (n = 0; n <= 9; n++)
		{
			result = m * n;

			if (n == 0)
			{
				_putchar('0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');

				if (result < 10)
				{
					_putchar(' ');
				}
			}

			if (result < 10)
			{
				_putchar('0' + result);
			}
			else
			{
				_putchar('0' + result / 10);
				_putchar('0' + result % 10);
			}
		}
		_putchar('$');
		_putchar('\n');
	}
}


#include "holberton.h"
/**
 *times_table - prints the 9 times table, starting with 0
 *
 *Return: 0
 */

void times_table(void)
{
	int n, m;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			if (n * m >= 10)
			{
				_putchar(' ');
				_putchar((n * m) / 10 + '0');
				_putchar((n * m) % 10 + '0');
			}
			else
			{
				if (m != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(n * m + '0');

			}
			if (m != 9)
			{
				_putchar(',');
			}
			if (m == 9)
			{
				_putchar('\n');
			}
		}
		m = 0;
	}
}

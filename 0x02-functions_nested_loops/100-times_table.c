#include <stdio.h>
#include "holberton.h"
/**
 *main-prints out Holberton, followed by new line
 *
 *Return: 0
 */

void print_times_table(int n)
{
int i, j;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
			if ((i * j) / 100 == 0 && j != 0) 
			{
			_putchar(' ');
			if ((i * j) / 10 % 10 == 0) 
			_putchar(' ');
			else
				_putchar((i * j) / 10 % 10 + '0'); 
				_putchar((i * j) % 10 + '0'); 
			}
			else if ((i * j) / 100 != 0) 
			{
				_putchar((i * j) / 100 + '0'); 
				_putchar((i * j) / 10 % 10 + '0');
				_putchar((i * j) % 10 + '0');
			}
			if (j == 0)
				_putchar('0');
			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
			}
			_putchar('\n');
			j = 0;
		}
	}
}

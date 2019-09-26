#include "holberton.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: An integer number
 *
 *
 * Return: void
 */

void print_diagonal(int n)
{
int i;
int j;

if (n <= 0)
{
_putchar('\n');
}
else
{
	for (i = 1; i <= n; i++)
	{
	if (n >= 2 && i >= 2)
	{
		for (j = 1; j <= i - 1; j++)
		{
		_putchar(' ');
		}
	}
	_putchar(92);
	if (i != n)
		{
		_putchar('\n');
		}
	}
	_putchar('\n');
}
}

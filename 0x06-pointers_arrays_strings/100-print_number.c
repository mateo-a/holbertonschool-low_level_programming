#include "holberton.h"

/**
 * print_number - Function that prints an integer
 *
 * @n: integer
 * Return: void
 */

void print_number(int n)
{
	int  sign, num;

	num = 1000000000;
	if (n < 0)
	{
		n *= -1;
		sign = 1;
		}
	if  (n != 0)
	{
		while ((n / num) ==  0)
		{
			num = num / 10;
		}
		if (sign == 1)
			_putchar('-');
		while (num >= 1)
		{
			_putchar((n / num) + '0');
			n = n % num;
			num = num / 10;
		}
	}
	else
		_putchar('0');
}

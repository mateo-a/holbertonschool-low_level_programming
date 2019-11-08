#include "holberton.h"
/**
 * print_binary - function that prints the binary representation of a number
 *
 * @n: integer
 * Return: void
 *
 */
void print_binary(unsigned long int n)
{
	char bin;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n > 1)
		print_binary(n >> 1);
	if ((n & 1) == 0)
		bin = '0';
	else if (n & 1)
		bin = '1';
	_putchar(bin);
}

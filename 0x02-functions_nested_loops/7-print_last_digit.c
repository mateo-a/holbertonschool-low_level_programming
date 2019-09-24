#include "holberton.h"

/**
 * print_last_digit - prints last digit of number
 * @n: number to print last digit of
 *
 * Return: the value of last digit
 */

int print_last_digit(int n)
{
	int digit;

	if (n < 0)
	{
		n = n * -1;
	}
	digit = n % 10;
	_putchar(digit + '0');
	return (digit);
}

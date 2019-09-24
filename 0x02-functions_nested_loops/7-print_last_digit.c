#include "holberton.h"
/**
 *print_last_digit - prints the last digit of a number
 *@n: An integer number
 *
 *Return: The value of the last digit
 */

int print_last_digit(int n)
{
int i;

if (n < 0)
{
	n = n * -1;
}
i = n % 10;
_putchar(i + '0');
return (i);
}

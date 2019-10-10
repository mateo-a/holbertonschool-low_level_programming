#include "holberton.h"

/**
 * _divisor - Returns 1 if the input integer is a prime number
 *
 * @base: integer
 * @number: integer
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */

int _factor(int base, int number)
{
	if (base == number)
		return (1);
	else if (base % number == 0 || base < 2)
		return (0);
	return (_factor(base + 1, number));
}

/**
 * is_prime_number - function that returns 1 if the input integer is a prime
 *                   number, otherwise return 0
 *
 * @n: integer
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	return (_factor(2, n));
}

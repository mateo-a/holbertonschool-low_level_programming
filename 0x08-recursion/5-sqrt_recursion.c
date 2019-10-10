#include "holberton.h"

/**
 * _square - square root of a number
 *
 * @number: integer
 * @root: integer
 *
 * Return: square root
 */

int _square(int number, int root)
{
	if (number == root * root)
		return (root);
	else if (number < root * root)
		return (-1);
	return (_square(number, root + 1));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 *
 * @n: integer
 * Return: integer
 */

int _sqrt_recursion(int n)
{
	return (_square(n, 1));
}

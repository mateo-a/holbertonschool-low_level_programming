#include "holberton.h"

/**
 * _isdigit - checks for a digit
 * @c: Input parameter in ASCII
 *
 * Return: 1 if is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48  && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

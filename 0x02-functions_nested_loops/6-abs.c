#include "holberton.h"
/**
 *_abs - computes the absolute value of an integer
 *@n: An integer number
 *
 *Return: n with the absolute value
 */

int _abs(int n)
{
if (n < 0)
	{
	n = n * -1;
	return (n);
	}
else
	{
	return (n);
	}
}

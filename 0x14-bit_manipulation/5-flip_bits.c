#include "holberton.h"
/**
 * flip_bits - function that returns the number of bits you would need to
 *             flip to get from one number to another
 *
 * @n: integer
 * @m: integer
 * Return: number of bits you need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits = 0;
	unsigned long int x_num;

	x_num = n ^ m;
	while (x_num > 0)
	{
		if ((x_num & 1) != 0)
			bits++;
		x_num = x_num >> 1;
	}
	return (bits);
}

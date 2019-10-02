#include "holberton.h"

/**
 * _atoi - Function that convert a string to an integer
 *
 * @s: pointer string
 *
 * Return: value the pointer to dest
 */

int _atoi(char *s)
{
	int i, num, sign;

	sign = 1;
	i = 0;
	num = 0;
	while ((s[i] < '0' || s[i] > '9') && (s[i] != '\0'))
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while ((s[i] >= '0') && (s[i] <= '9'))
	{
		num = num * 10 + (s[i] - '0');
		i++;
	}
	return (num * sign);
}

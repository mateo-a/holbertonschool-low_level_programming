#include "holberton.h"

/**
 * _strspn - function that gets the length of a prefix substring
 *
 * @s: string
 * @accept: chars
 * Return: number of bytes in the initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int val;
	int i, j, k;

	i = 0;
	while (s[i] != '\0')
	{
		k = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				k = 1;
		}
		j = 0;
		if (k == 0)
			break;
		val++;
		i++;
	}
	return (i);
}

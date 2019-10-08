#include "holberton.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 *
 * @s: string
 * @accept: string
 * Return: pointer to the byte in s
 */

char *_strpbrk(char *s, char *accept)
{
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
		if (k == 1)
			return (s + i);
		i++;
	}
	return (NULL);
}

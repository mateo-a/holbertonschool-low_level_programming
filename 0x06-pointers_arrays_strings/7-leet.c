#include "holberton.h"

/**
 * leet - encodes a string into 1337
 * @s: string
 * Return: string
 */

char *leet(char *s)
{
	int i = 0, j, k;
	char let[] = "oOlLeEaAtT";
	char num[] = "0011334477";

	while (s[i] != '\0')
	{
		j = 0;
		k = 0;
		while (let[j] != '\0')
		{
			if (s[i] == let[j])
			{
				k = j;
				s[i] = num[k];
			}
			j++;
		}
		i++;
	}
	return (s);
}

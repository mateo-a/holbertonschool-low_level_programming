#include "holberton.h"

/**
 * rev_string - Function that reverses a string
 *
 * @s: string
 *
 * Return: void
 */

void rev_string(char *s)
{
        int i = 0, j = 0;
	char ch;

        while (s[i] != 0)
        {
                i++;
        }
	i = i - 1;
	while (j < i)
	{
		ch = s[i];
		s[i] = s[j];
		s[j] = ch;
		j++;
		i--;
	}
}

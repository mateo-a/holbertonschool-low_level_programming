#include "holberton.h"

/**
 * rot13 - converts string to rot13
 *
 * @s: pointer to a string
 * Return: pointer to char
 */

char *rot13(char *s)
{
	int i, j;
	char let[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
	j = 0;
	while ((let[j] != '\0') && (s[i] != let[j]))
	{
		j++;
	}
	if (s[i] == let[j])
	{
		s[i] = rot[j];
	}
	}
return (s);
}

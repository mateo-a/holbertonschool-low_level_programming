#include "holberton.h"

/**
 * str_concat - function that concatenates two strings.
 *
 * @s1: char
 * @s2: char
 * Return: NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	char *nul;
	int i, j, k;

	nul = "";
	if (s1 == NULL)
		s1 = nul;
	if (s2 == NULL)
		s2 = nul;
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	str = malloc((i + j++) * sizeof(*str));
	if (str == NULL)
		return (NULL);
	for (k = 0; s1[k] != '\0'; k++)
		str[k] = s1[k];
	for (j = 0; s2[j] != '\0'; j++)
	{
		str[k] = s2[j];
		k++;
	}
	str[k] = '\0';
	return (str);
}

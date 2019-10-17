#include "holberton.h"

/**
 * string_nconcat - function that concatenates two strings
 *
 * @s1:char
 * @s2:char
 * @n: int
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	for (i = 0; s1[i] != '\0'; i++)
		;
	p = malloc((i + (n * sizeof(*s2) + 1) * sizeof(*p)));
	if (p == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		p[i] = s1[i];
	for (j = 0; s2[j] != '\0' && j < n; j++, i++)
		p[i] = s2[j];
	p[i] = '\0';
	return (p);
}

#include "holberton.h"

/**
 * _strcat - Function that concatenates two strings.
 *
 * @dest: pointer
 * @src: pointer
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int i, j = 0;

	for (i = 0; dest[i] != '\0'; i++)
		;
		while (src[j] != '\0')
		{
			dest[i] = src[j];
			j++;
			i++;
		}
	i++;
	dest[i] = '\0';
	return (dest);
}

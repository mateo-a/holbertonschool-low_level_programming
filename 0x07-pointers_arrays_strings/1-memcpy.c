#include "holberton.h"

/**
 * _memcpy - function that copies memory area
 *
 * @src: source memory area
 * @dest: destination memory area
 * @n: number of bytes to copy
 * Return: A pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

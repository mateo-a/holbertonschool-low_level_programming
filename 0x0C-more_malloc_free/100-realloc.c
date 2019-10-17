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
		dest[i] = src[i];
	return (dest);
}

/**
 * _realloc - function that reallocates a memory block using malloc and free
 *
 * @ptr: pointer
 * @old_size: Old size of memory
 * @new_size: New size of memory
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
		{
			free(ptr);
			return (NULL);
		}
		free(ptr);
		return (p);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);
	if (p == NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
		_memcpy(p, ptr, old_size);
	free(ptr);
	return (p);
}

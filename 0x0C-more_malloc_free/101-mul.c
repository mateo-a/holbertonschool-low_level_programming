#include "holberton.h"
#include <string.h>

/**
 * _isdigit - checks if it is fully a number
 * @c: string to validate
 * Return: 1 if is digit otherwise 0
 */

int _isdigit(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= '0' && c[i] <= '9')
			return (1);
	}
	return (0);
}

/**
 * main - program that multiplies two positive numbers
 *
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int l1, l2, len, i, j, mul, carry;
	int *total;

	if (argc != 3 || !(_isdigit(argv[1])) || !(_isdigit(argv[2])))
	{
		puts("Error");
		exit(98);
	}
	l1 = strlen(argv[1]);
	l2 = strlen(argv[2]);
	len = l1 + l2;
	total = calloc(len, sizeof(int));
	if (total == NULL)
		puts("Error"), exit(98);
	for (i = l2 - 1; i > -1; i--)
	{
		carry = 0;
		for (j = l1 - 1; j > -1; j--)
		{
			mul = (argv[2][i] - '0') * (argv[1][j] - '0');
			carry =  (mul / 10);
			total[(i + j) + 1] += (mul % 10);
			if (total[(i + j) + 1] > 9)
			{
				total[i + j] += total[(i + j) + 1] / 10;
				total[(i + j) + 1] = total[(i + j) + 1] % 10;
			}
			total[(i + j)] += carry;
		}
	}
	if (total[0] == 0)
		i = 1;
	else
		i = 0;
	for (; i < len; i++)
		printf("%d", total[i]);
	printf("\n");
	free(total);
	return (0);
}

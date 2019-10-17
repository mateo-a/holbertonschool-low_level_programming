#include "holberton.h"

/**
 * _isdigit - checks if it is fully a number
 * @num: string to validate
 * Return: 1 if is digit otherwise 0
 */

int _isdigit(char *num)
{
	int i;

	for (i = 0; num[i] != '\0'; i++)
	{
		if (num[i] < '0' || num[i] > '9')
			return (0);
	}
	return (1);
}

/**
 * _strlen - size of string
 * @s: string to measure
 * Return: size of string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
		++i;
	return (i);


/**
 * main - program that multiplies two positive numbers
 *
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int length, carry, prod, i, j, len1, len2;
	int *result;

	if (argc != 3 || !(_isdigit(argv[1])) || !(_isdigit(argv[2])))
	{
		puts("Error");
		exit(98);
	}
	len1 = _strlen(argv[1]);
	len2 = _strlen(argv[2]);
	length = len1 + len2;
	result = calloc(length, sizeof(int *));
	if (result == NULL)
		puts("Error"), exit(98);
	for (i = len2 - 1; i > -1; i--)
	{
		carry = 0;
		for (j = len1 - 1; j > -1; j--)
		{
			prod = (argv[2][i] - '0') * (argv[1][j] - '0');
			carry =  (prod / 10);
			result[(i + j) + 1] += (prod % 10);
			if (result[(i + j) + 1] > 9)
			{
				result[i + j] += result[(i + j) + 1] / 10;
				result[(i + j) + 1] = result[(i + j) + 1] % 10;
			}
			result[(i + j)] += carry;
		}
	}
	if (result[0] == 0)
		i = 1;
	else
		i = 0;
	for (; i < length; i++)
		printf("%d", result[i]);
	printf("\n");
	free(result);
	return (0);
}

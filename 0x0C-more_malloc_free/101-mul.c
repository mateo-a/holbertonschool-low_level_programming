#include "holberton.h"

/**
 * main - program that multiplies two positive numbers
 *
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j, mul;

	if (argc != 3)
	{
		printf("Error\n");
		exit(22);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	mul = i * j;
	printf("%d\n", mul);
return (0);
}

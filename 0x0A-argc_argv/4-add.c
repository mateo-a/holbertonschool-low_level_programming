#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program that prints its name, followed by a new line
 *
 * @argc: arguement count
 * @argv: pointer to array of strings arguments
 * Return: none
 */

int main(int argc, char **argv)
{
	int c, i, sum;

	sum = 0;

	for (c = 1; c < argc; c++)
	{
		for (i = 0; argv[c][i] != '\0'; i++)
		{
			if (!isdigit(argv[c][i]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[c]);
	}
	printf("%d\n", sum);
	return (0);
}

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
	int i, j, sum = 0;

	for (j = 1; j < argc; j++)
	{
		for (i = 0; argv[j][i] != '\0'; i++)
		{
			if (!isdigit(argv[j][i]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[j]);
	}
	printf("%d\n", sum);
	return (0);
}

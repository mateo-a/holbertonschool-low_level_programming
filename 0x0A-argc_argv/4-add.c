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
	int add = 0, i;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (isdigit(*argv[i]))
				add = add + atoi(argv[i]);
			else if (argv[i][0] == 45 && isdigit(argv[i][1]))
				add = add - (atoi(argv[i])) * -1;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", add);
	}
return (0);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the minimum number of coins to make change for
 *        an amount of money
 *
 * @argc: arguement count
 * @argv: pointer to array of strings arguments
 * Return: none
 */

int main(int argc, char **argv)
{
	int cents, con = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents <= 0)
	{
		printf("%d\n", 0);
	}
	else
	{
		con += cents / 25;
		cents %= 25;
		con += (cents / 10);
		cents %= 10;
		con += (cents / 5);
		cents %= 5;
		con += (cents / 2);
		cents %= 2;
		con += cents;
		printf("%d\n", con);
	}
	return (0);
}

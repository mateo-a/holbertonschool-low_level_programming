#include <stdio.h>

/**
 * main - program that prints its name, followed by a new line
 *
 * @argc: arguement count
 * @argv: pointer to array of strings arguments
 * Return: none
 */

int main(int argc, __attribute__((unused)) char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}

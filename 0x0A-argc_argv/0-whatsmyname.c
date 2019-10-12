#include <stdio.h>

/**
 * main - program that prints its name, followed by a new line
 *
 * @argc: arguement count
 * @argv: pointer to array of strings arguments
 * Return: none
 */

int main(__attribute__((unused)) int argc, char **argv)
{
	printf("%s\n", argv[0]);
}

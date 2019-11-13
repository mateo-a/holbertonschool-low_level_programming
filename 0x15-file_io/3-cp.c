#include "holberton.h"
/**
 * main - program that copies the content of a file to another file
 * @argc: argument count
 * @av: argument values
 * Return: none
 */
int main(int argc, char *av[])
{
	int file_from, file_to, file_read, file_write;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
	exit(98);
	}
	file_to  = open(av[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	do  {
	file_read = read(file_from, buffer, 1024);
	if (file_read ==  -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
	exit(98);
	}
	file_write = write(file_to, buffer, file_read);
	if (file_write == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	} while (file_read == 1024);
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}

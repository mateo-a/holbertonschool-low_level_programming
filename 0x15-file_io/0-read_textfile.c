#include "holberton.h"
/**
 * read_textfile - function that reads a text file and prints it to the
 *                 POSIX standard output
 * @filename: name of file
 * @letters: number of letters to read
 * Return: the actual number of letters it could read and print
 *      if the file can not be opened or read, return 0
 *      if filename is NULL return 0
 *      if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
/* file descriptor fd, num read num_r, num write num_w */
	int fd;
	ssize_t num_r = 0, num_w = 0;
	char *buf;

	if (!filename)
		return (0);
/* Open the file ReadOnly and check if it fails*/
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
/* Read the information of the buffer, read-returns the number of bytes read */
	num_r = read(fd, buf, letters);
	if (num_r == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
/* Write buffer in STDOUT_FILENO (1) while new_r exists*/
	if (num_r != 0)
		num_w = write(1, buf, num_r);
	free(buf);
	if (close(fd) == -1 || num_w == -1 || num_r != num_w)
		return (0);
	return (num_w);
}

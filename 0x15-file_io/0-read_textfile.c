#include "main.h"

/**
 * read_textfile - reads a text file and prints to stdout
 * @filename: pointer to name of the file
 * @letters: no of letters it should read and print
 *
 * Return: no of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, s, print;
	char *buf;

	fd = open(filename, O_RDONLY);

	if (fd == -1 || !filename)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	s = read(fd, buf, letters);
	if (s == -1)
	{
		free(buf);
		return (0);
	}
	buf[s] = '\0';
	close(fd);

	print = write(STDOUT_FILENO, buf, s);
	if (print == -1)
	{
		free(buf);
		return (0);
	}

	free(buf);
	return (print);
}

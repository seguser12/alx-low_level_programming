#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: string to write to file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, s, t;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (s = 0; text_content[s] != '\0'; s++)
			;
		t = write(fd, text_content, s);
		if (t != s)
			return (-1);
	}

	close(fd);
	return (1);
}

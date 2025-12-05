#include "main.h"

/**
 * create_file - Creates a file and writes text to it
 * @filename: Name of the file to create
 * @text_content: Text to write into the file (can be NULL)
 *
 * Return: 1 on success, -1 on failure
 *
 * Description:
 *   Creates or truncates the specified file and writes the given text.
 *   Returns -1 if filename is NULL, if opening the file fails, or if writing
 *   fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t count = 0;
	ssize_t wr;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[count] != '\0')
			count++;
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (count > 0)
	{
		wr = write(fd, text_content, count);
		if (wr != (ssize_t)count)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}

#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file
 * @filename: Name of the file to append to
 * @text_content: Text to append to the file (can be NULL)
 *
 * Return: 1 on success, -1 on failure
 *
 * Description:
 *   Opens the file in append mode and writes the provided text at the end.
 *   Returns -1 if filename is NULL, opening the file fails, or writing fails.
 *   If text_content is NULL, does nothing and returns 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t wr;
	size_t count = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[count] != '\0')
			count++;
	}
	else
		return (1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	wr = write(fd, text_content, count);
	if (wr != (ssize_t)count)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}

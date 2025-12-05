#include "main.h"

/**
 * read_textfile - lit un fichier texte et l'affiche sur stdout
 * @filename: nom du fichier à lire
 * @letters: nombre maximum de lettres à lire
 *
 * Return: nombre réel de lettres lues et affichées, ou 0 en cas d'erreur.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd, wr;
	char *temp;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	temp = malloc(sizeof(char) * letters);
	if (temp == NULL)
	{
		close(fd);
		return (0);
	}

	rd = read(fd, temp, letters);
	if (rd == -1)
	{
		free(temp);
		close(fd);
		return (0);
	}

	wr = write(STDOUT_FILENO, temp, rd);
	if (wr == -1 || wr != rd)
	{
		free(temp);
		close(fd);
		return (0);
	}

	free(temp);
	close(fd);

	return (wr);
}

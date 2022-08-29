#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename or path to the file
 * @letters: numbers of letters that should be read and print
 *
 * Return: The actual number of letters this could read and print. On failure, returns 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(fd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fd);

	free(buf);

	return (nwr);
}

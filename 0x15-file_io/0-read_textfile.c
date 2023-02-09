#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to the
 * POSIX standard output.
 * @filename: filename of file.
 * @letters: numbers of letters to read and print.
 * Return: number of letters read and printed, otherwise 0 if
 * file cannot be opened or read,
 * filename is NULL,
 * write fails or does not write the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd, nrd, nwr;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);
	nrd = read(fd, buffer, letters);
	nwr = write(STDOUT_FILENO, buffer, nrd);
	close(fd);
	free(buffer);
	return (nwr);
}

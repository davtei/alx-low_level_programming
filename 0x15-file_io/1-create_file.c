#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: name of the file to create.
 * @text_content: is a NULL terminated string to write to the file.
 * If the file already exists, truncate it.
 * Return: 1 on success, -1 on failure (file cannot be created,
 * file cannot be written, write "fails", etc...).
 * The file must have the permissions: rw-------.
 * If the file already exists, do not change the permission.
 * If the file already exists, truncate it.
 * If the filename is NULL, return -1.
 * If text_content is NULL, create an empty file.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, nletters, rwr;

	if (!filename)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (!text_content)
	{
		text_content = "";
	}
	for (nletters = 0; text_content[nletters]; nletters++)
		;
	rwr = write(fd, text_content, nletters);
	if (rwr == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}

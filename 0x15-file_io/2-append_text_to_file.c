#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of file.
 * @filename: name of the file.
 * @text_content: is the NULL terminated string to add at the end of the file.
 * Return: 1 (Success), otherwise - (Fail).
 * File is not created if it does not exist.
 * If filename is NULL return -1.
 * If text_content is NULL, do not add anything to the file.
 * Return 1 if the exists and -1 if the file does not exist or in absence of
 * required permissions to write the file.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, nletters, rwr;

	if (!filename)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;
		rwr = write(fd, text_content, nletters);
		if (rwr == -1)
		{
			return (-1);
		}
	}
	close(fd);
	return (1);
}

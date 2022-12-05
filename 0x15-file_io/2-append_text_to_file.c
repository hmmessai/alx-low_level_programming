#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: the name of the file
 * @text_content: the text to be appended
 *
 * Return: 1 on success
 *	-1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int letters;
	int bytes_wrote;

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (letters = 0; text_content[letters], letters++)
			;

		bytes_wrote = write(fd, text_content, letters);
		
		if (bytes_wrote == -1)
			return (-1);

	}

	close(fd);

	return (1);
}

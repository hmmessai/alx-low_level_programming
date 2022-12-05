#include "main.h"

/**
 * read_textfile - reads text file and prints it to the POSIX std output
 *
 * @filename: the name of the file to be read
 * @letters: number of letters it should print
 *
 * Return: the actual number of letters it could read and print
 *	0 if it can't be opened or read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read, bytes_wrote;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	buf = malloc(sizeof(char) * (letters));

	if (buf == NULL)
		return (0);


	if (fd < 0)
		return (0);

	bytes_read = read(fd, buf, letters);
	bytes_wrote = write(STDOUT_FILENO, buf, bytes_read);

	close(fd);

	free(buf);

	return (bytes_wrote);
}

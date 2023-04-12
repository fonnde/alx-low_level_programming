#include "main.h"
/**
 * read_textfile - read a file to be attributed
 *
 * @filename: the file to be read.
 * @letters: the number of chars to read
 * Description: go through a file to know output
 *
 * section header: the header of this function is main.h
 * Return: this return the number of chars
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, _read, _write;
	char *buffer;

	if (filename == NULL)
		return (0);


	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	return (0);

	fd = open(filename, O_RDONLY, 600);
	if (fd == -1)

	{
		free(buffer);
	return (0);
	}
	_read = read(fd, buffer, letters);
	if (_read == -1)
	{
	free(buffer);
	return (0);
	}

	_write = write(STDOUT_FILENO, buffer, _read);
	if (_write == -1 || _write != _read)
	{
	return (0);
	}

	free(buffer);
	close(fd);
	return (_write);
}

#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - read a file to be attributed
 *
 * @filename: the file to be read.
 * @letters: the number of chars to read
 * Description: go through a file to know output
 * section header: the header of this function is main.h
 * Return: If the function fails or filename is NULL - 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t a, b, c;
	char *buffer;



	if (filename == NULL)
	return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	return (0);


	a = open(filename, O_RDONLY);
	b = read(a, buffer, letters);
	c = write(STDOUT_FILENO, buffer, b);

	if (a == -1 || b == -1 || c == -1 || c != b)
	{
	free(buffer);
	return (0);
	}

	free(buffer);
	close(a);

	return (c);
}

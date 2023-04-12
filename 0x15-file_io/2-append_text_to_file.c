#include "main.h"
/**
 * @str: pointer to the string
 * _strlen - finds the length of a string
 * description: returns lenght of the string
 *
 * append_text_to_file - adds a text at the end of a line
 * @filename: name of the file
 * @text_content: NULL terminated string to add at end of the file
 * return: lenghth of string
 * return: 1 if succesfull and -1 if failed
 */
size_t _strlen(char *str)
{
	size_t j;

	for (j = 0; str[j]; j++)
		;

	return (j);
}
int append_text_to_file(const char *filename, char *text_content)
{
	int m;
	ssize_t len;



	if (filename == NULL)
	return (-1);
	m = open(filename, O_WRONLY | O_APPEND);
	if (m == -1)
	return (-1);
	if (text_content != NULL)
	len = write(m, text_content, _strlen(text_content));
	close(m);
	if (len == -1)
		return (-1);
	return (1);
}

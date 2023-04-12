#include "main.h"
/**
 * @filename: name of the file to be created
 * @text_content: is a 	NULL terminated string to write the files
 * create_file - initializes and creates an array of characters
 * return : -1 if failed and 1 if successful
 */
int create_file(const char *filename, char *text_content)
{

	int a, b, len = 0;


	a = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	b = write(a, text_content, len);


	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	if (a == -1 || b == -1)
		return (-1);

	close(a);

	return (1);
}


#include "main.h"
#include <string.h>
/**
 * create_file - creates a files
 * @filename: name of the file to create
 * @text_content: is a string
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int see;

	if (!*filename)
		return (-1);
	see = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (see == -1)
		return (0);

	if (text_content)
		write(see, text_content, strlen(text_content));
	return (1);
}

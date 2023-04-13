#include "main.h"
/**
 * read_textfile - reads a text file and prints it
 * @filename: file name
 * @letters: number of letters
 * Return: number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int see, count = 0;
	char *s;

	if (!*filename)
		return (0);

	see = open(filename, O_RDONLY);
	if (see == -1)
		return (0);

	s = malloc(letters);
	if (!s)
		return(0);

	read(see, s, letters);
	
	while(s[count])
		count++;

	write(STDOUT_FILENO, s, count);

	close(see);
	return(count);	
}

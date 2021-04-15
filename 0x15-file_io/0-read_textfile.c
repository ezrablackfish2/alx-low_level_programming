#include "main.h"
/**
 * read_textfile - reads the text in a file and it prints it out in the standard output
 * @filename: the filename to be read
 * @letters: the length of letters the function should read
 * Return: the number of letters printed or failure 0
 */
size_t read_textfile(const char *filename, size_t letters)
{
	int filed;
	char *buffer;
	int lread;
	int stdowrite;

	if (!filename)
	{
		return (0);
	}
	filed = open(filename, O_RONLY);
	if (filed < 0)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		return (0);
	}
	lread = read(filed, buffer, letters);
	if (lread < 0)
	{
		free(buffer);
		return (0);
	}
	buffer[lread] = '\0';
	close(filed);

	stdowrite = write(STDOUT_FILENO, buffer, lread);
	if (stdowrite < 0)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	return (stdowrite);
}

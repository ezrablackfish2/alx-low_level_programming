#include "main.h"

/**
 * read_textfile - reades first the text file then prints it
 * @fiename: is the file name that is used and given to you
 * @letters: is the number of letter it should read
 * Return: the number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t ope, rea, wri;
	char *space;

	if (filename == NULL)
	{
		return (0);
	}
	space = malloc(sizeof(char) * letters);
	if (space == NULL)
	{
		return (0);
	}

	ope = open(filename, O_RDONLY);
	rea = read(ope, space, letters);
	wri = write(STDOUT_FILENO, space, rea);

	if (ope == -1 || rea == -1 || wri == -1 || wri != rea)
	{
		free(space);
		return (0);
	}

	free(space);
	close(ope);

	return (wri);
}

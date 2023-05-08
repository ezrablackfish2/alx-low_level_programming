#include "main.h"

char *create_space(char *file);
void cose_file(int fd);

/**
 * create_space - allocates 1024 to space
 * @file: the name of the file
 * Return: a pointer to the new space
 */

char *create_space(char *file)
{
	char *space;

	space = malloc(sizeof(char) * 1024);

	if (space == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (space);
}

/**
 * close_file - closes file
 * @fd: the file descriptor
 * Return: nothing
 */
void  close_file(int fd)
{
	int cl;

	cl = close(fd);

	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file
 * @argc: the number of arguments supplied to program
 * @argv: an array of pointers to the argument
 * Return: 0 on succes
 */

int main(int argc, char *argv[])
{
	int initial, final, rea, wri;
	char *space;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	space = create_space(argv[2]);
	initial = open(argv[1], O_RDONLY);
	rea = read(initial, space, 1024);
	final = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (initial == -1 || rea == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(space);
			exit(98);
		}

		wri = write(final, space, rea);
		if (final == -1 || wri == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(space);
			exit(99);
		}

		rea = read(initial, space, 1024);
		final = open(argv[2], O_WRONLY | O_APPEND);

	} while (rea > 0);

	free(space);
	close_file(initial);
	close_file(final);

	return (0);
}

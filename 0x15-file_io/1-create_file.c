#include "main.h"

/**
 * create_file - creates a file and prints the content of text_content into it
 * @filename: is the file to be created
 * @text_content: is the text file to be copied from
 * Return: 1 if success -1 if failure
 */

int create_file(const char *filename, char *text_content)
{
	if (filename == NULL)
	{
		return (-1);
	}
	open(filename, O_RDWR);
	if (text_content == NULL)
	{
		write(STDOUT_FILENO, filename, *text_content);
		return (1);
	}
	write(STDOUT_FILENO, filename, *text_content);
	return (1);
}

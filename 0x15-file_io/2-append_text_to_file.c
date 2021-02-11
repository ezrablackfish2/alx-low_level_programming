#include "main.h"

/**
 * append_text_to_file - we will append a file to a file
 * @filename: is the original file
 * @text_content: is the file to be appended
 * Return: 1 if success -1 if failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int ope, wri, l = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
		{
			l++;
		}
	}

	ope = open(filename, O_RDWR | O_APPEND | O_TRUNC, 0600);
	wri = write(ope, text_content, l);

	if (ope == -1 || wri == -1)
	{
		return (-1);
	}
	close(ope);

	return (1);
}

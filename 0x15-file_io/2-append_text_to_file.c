#include "main.h"

/**
 * append_text_to_file - append a text to file
 * @filename: the file to be appended
 * @text_content: the text that is the appendee
 * Return: 1 sicces 0 failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int filed, twrite, lread = 0;

	if (!filename)
	{
		return (-1);
	}

	filed = open(filename, O_WRONLY | O_APPEND);
	if (filed < 0)
	{
		return (-1);
	}
	if (text_content)
	{
		while (text_content[lread])
		{
			lread++;
		}
		twrite = write(filed, text_content, lread);
		if (twrite != lread)
		{
			return (-1);
		}
	}
	close(filed);
	return (1);
}

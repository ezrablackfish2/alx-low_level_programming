#include "main.h"
/**
 * create_file - copies content of one file to another
 * @*filename: is the name of ile to be copied
 * @*text_content: the copy to be text
 * Return: 1 success -1 failure
 */
int create_file(const char *filename, char *text_content)
{
	int filed = 0;
	int lread = 0;
	int twrite = 0;

	if (!filename)
	{
		return (-1);
	}
	filed = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
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

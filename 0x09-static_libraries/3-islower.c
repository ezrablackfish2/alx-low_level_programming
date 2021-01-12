#include "main.h"
/**
 * _islower - tries to identify the lower case letter alphabet
 * @c: a character to be checked
 * Return: 1 and 0 on certain condition
 */
int _islower(int c)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (i < 26)
	{
		if  (c == alphabet[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

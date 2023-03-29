#include "main.h"
/**
 * *_strncpy - copies a string into another string
 * @dest: the destination file to be copied
 * @src: the source file that is going to be copied
 * Return: character
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; src[i] != '\0' && n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}
	if (src[i] == '\0')
	{
		dest[i] = '\0';
	}
	return (dest);
}

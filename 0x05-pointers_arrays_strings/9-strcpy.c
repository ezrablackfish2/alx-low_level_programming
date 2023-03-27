#include "main.h"
/**
 * _strcpy - copies the value of one string to another string
 * @dest: the destination file that is to be pasted
 * @src: the value where the copy is taken
 * Return: character
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *src != '\0'; src++)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i + 1] = '\0';
	return (dest);
}

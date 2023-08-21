#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: is the string to be added on the tail
 * @src: is the string to be concatinated
 * Return: character the string concatinated
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int l = 0;

	while (dest[l] != '\0')
	{
		l++;
	}
	while (src[i] != '\0')
	{
		dest[i + l] = src[i];
		i++;
	}
	dest[i + l] = '\0';
	return (dest);
}

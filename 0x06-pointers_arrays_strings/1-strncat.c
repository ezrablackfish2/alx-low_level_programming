#include "main.h"
/**
 * *_strncat - concatenates two strings
 * @dest: the string to be concatenated
 * @src: the string that wiill be taken
 * @n: the amount of byte of source
 * Return: character
 */
char *_strncat(char *dest, char *src, int n)
{
	int l = 0;
	int i = 0;

	while (dest[l] != '\0')
	{
		l++;
	}
	while (src[i] != '\0' && n > 0)
	{
		dest[i + l] = src[i];
		i++;
		n--;
	}
	dest[i + l] = '\0';
	return (dest);
}

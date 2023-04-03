#include "main.h"
#include <stdio.h>
/**
 * _strstr - finds the substring of a pointer
 * @haystack: the whole string that the substring to be located
 * @needle: yje substring that is going to be located
 * Return: the substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (needle[0] == haystack[i])
		{
			return (haystack + i);
		}
	}
	if (haystack[i] == '\0')
	{
		return (NULL);
	}
	return (haystack + i);
}

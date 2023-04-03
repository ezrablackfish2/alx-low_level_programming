#include "main.h"
/**
 * *_strchr - locates a character required in a given string
 * @s: the string given
 * @c: the charactee we must locate and identify
 * Return: the remaining string
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return ((s + i));
		}
	}
	if (s[i] == '\0')
	{
		return ('\0');
	}
	return (s);
}

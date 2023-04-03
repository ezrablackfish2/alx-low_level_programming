#include "main.h"
/**
 * _strspn - use to find the length of a string before the
 * first identified character
 * @s: the string which is to be counted
 * @accept: the character that gives the case for count to begin
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (accept[0] == s[i])
		{
			return ((i + 1));
		}
	}
	return (i + 1);
}

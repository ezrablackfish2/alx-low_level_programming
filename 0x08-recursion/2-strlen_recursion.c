#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: the string size for it to be taken
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		return (0);
	}
	i++;
	return(i + _strlen_recursion(s + 1));
}


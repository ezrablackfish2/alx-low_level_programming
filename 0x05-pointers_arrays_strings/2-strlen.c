#include "main.h"
/**
 * strlen - inorder to find the length of a string
 * @s: the string to be counted
 * Return: the length of the string
 */
int strlen(char *s)
{
	int n;

	for (n = 0; *s != '\0'; s++)
	{
		n++;
	}
	_putchar('\n');
	return (n);
}

#include "main.h"
/**
 * _isalpha - checks whether all are alphabetic or not
 * @c: is character to be checked
 * Return: 1 and 0
 */
int _isalpha(int c)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;

	while (i < 52)
	{
		if (c == alphabet[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

#include "main.h"
/**
 * _isupper - checks whether a letter is uppercase or not
 * @c: is the character to be checked
 * Return: 1 or 0
 */

int _isupper(int c)
{
	if (c <= 90 && c >= 65)
	{
		return (1);
	}
	return (0);
}

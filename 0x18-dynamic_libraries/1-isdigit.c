#include "main.h"
/**
 * _isdigit - tries to check whether a number is digit or not'
 * @c: the number to be checked
 * Return: 1 else 0
 */
int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
	{
		return (1);
	}
	return (0);
}

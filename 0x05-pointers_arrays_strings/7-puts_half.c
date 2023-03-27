#include "main.h"
/**
 * puts_half - prints the half part of the string
 * @str: the string to be halfed and printed
 * Return: nothing
 */

void puts_half(char *str)
{
	int i, l;

	for (i = 0; *str != '\0'; str++)
	{
		i++
	}
	l = (i - 1) / 2
	for (l; l <= i; l++)
	{
		_putchar(str[l]);
	}
}

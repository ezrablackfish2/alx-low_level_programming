#include "main.h"
/**
 * print_rev - prints string in reverse order
 * @s: is the string to be reversed
 * Return: nothing
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
	{
		i++;
	}
	for (; i >= 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}

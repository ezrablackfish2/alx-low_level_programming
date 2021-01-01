#include "main.h"
/**
 * _puts - the funciton prints strings
 * @str: the string to be printed
 * Return: nothing
 */
void _puts(char *str)
{
	int n;

	for (n = 0; *str != '\0'; n++)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

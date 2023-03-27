#include "main.h"
/**
 * puts2 - jumps and prints the characters
 * @str; the string to be jumped and printed
 * Return: nothing
 */
void puts2(char *str)
{
	int i;
	
	for (i = 0; *str != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
}


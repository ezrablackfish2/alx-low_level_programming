#include "main.h"
/**
 * print_last_digit - prints the last digit of the integer
 * @i: the integer to be checked for last digit
 * Return: 1 and 0
 */
int print_last_digit(int i)
{
	if (i < 0)
	{
		_putchar('0' + i);
		return (-i % 10);
	}
	else
	{
		_puchar('0' + i);
		return (i % 10);
	}
}

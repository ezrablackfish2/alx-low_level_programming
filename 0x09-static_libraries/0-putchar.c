#include "main.h"
/**
 * main - to return the string _putchar with out using standard library
 * Return: zero (0)
 */
int main(void)
{
	char *h = "_putchar\n";

	while (*h)
	{
		_putchar(*h);
		h++;
	}
	return (0);
}

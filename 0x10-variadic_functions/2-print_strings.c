#include "variadic_functions.h"

/**
 * print_strings - prints strings only is a variadic function
 * @separator: is the comma between the strings
 * @n: is the number of strings passed to the argument
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list vivian;
	unsigned int i;

	if (!(separator))
	{
		return;
	}
	va_start(vivian, n);
	for (i = 0; i < n; i++)
	{
		if (!(va_arg(vivian, char *)))
		{
			va_arg(vivian, char *) == "(nil)";
		}
		if (!(separator))
		{
			printf("%s", va_arg(vivian, char *));
		}
		else if (separator && i == 0)
		{
			printf("%s", va_arg(vivian, char *));
		}
		else
		{
			printf(", %s", va_arg(vivian, char *));
		}
	}
	va_end(vivian);

	printf("\n");
}


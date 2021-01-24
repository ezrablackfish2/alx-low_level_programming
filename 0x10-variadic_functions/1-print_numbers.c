#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - prints numbers only in variadic functions
 * @separator: is the string to be printed between numbers
 * @n: the number of strings passed to functions
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	if (separator == NULL)
	{
		return;
	}
	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(valist, int));
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
	va_end(valist);
}

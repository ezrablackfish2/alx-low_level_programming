#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @str: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *str)
{
	int o;
	unsigned int dec = 0;

	if (!str)
		return (0);

	for (o = 0; str[o]; o++)
	{
		if (str[o] < '0' || str[o] > '1')
			return (0);
		dec = 2 * dec + (str[o] - '0');
	}

	return (dec);
}

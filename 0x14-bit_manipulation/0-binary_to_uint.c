#include "main.h"

/**
 * binary_to_uint - changes binary to unsigned int
 * @b: the binary number
 * Return: the integer
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int sum, exp = 1;

	if (b == NULL)
	{
		return (0);
	}

	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		i++;
	}

	i--;
	for (sum = 0; i >= 0; i--, exp *= 2)
	{
		if (b[i] == '1')
		{
			sum += exp;
		}
	}
	return (sum);
}

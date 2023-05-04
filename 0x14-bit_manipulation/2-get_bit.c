#include "main.h"

/**
 * get_bit - get the required bit in given index
 * @n: the number
 * @index: the index in which the bit is to be printed
 * Return: the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}

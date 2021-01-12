#include "main.h"
/**
 * *_memset - fills memory with constant byte
 * @s: the pointer to be filled
 * @b: the value to be filled
 * @n: the total size of memory in bytes
 * Return: memory destination
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}

#include <stdio.h>
/**
 * *_memcpy - copies the memory value of source to destination
 * @dest: the memory to be pasted
 * @src: the memory to be copied from
 * @n: the size of the memory integer
 * Return: destination pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}

#include <stdio.h>
/**
 * main - to list numbers without char but with putchar
 * Return: zero (0)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num % 10);
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - listing order ascending hexadecimals
 * Return: zero (0)
 */
int main(void)
{
	int num;
	char letter;

	for (num = 0; num <= 9; num++)
	{
		putchar(num);
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - printing the alphabet of a character
 * Return: zero
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}


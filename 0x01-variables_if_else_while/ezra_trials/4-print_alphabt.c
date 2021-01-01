#include <stdio.h>
/**
 * main - printing every alphabet except q and e
 * Return: zero
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'c')
		{
			putchar(letter)
		}
		putchar('\n);
	return (0);
}

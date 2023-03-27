#include <stdio.h>
/** 
 * main - single digit numbers with comma
 * Return: zero (0)
 */
int main(void)
{
	int num;
	
	for (num = 0; num < 10; num++)
	{
		putchar(num);
		if (num != 9)
		{
			putchar(' ');
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}

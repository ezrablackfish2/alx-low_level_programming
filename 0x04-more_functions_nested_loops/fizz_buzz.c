#include <stdio.h>
/**
 * main - we are going to do the interview bomb question fizzbuzz
 * Return: zero
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		printf(" ");
		if (i == 100)
		{
			printf("\n");
		}
	}
return (0);
}


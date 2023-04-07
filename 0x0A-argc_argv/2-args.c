#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all arguments given to a function
 * @argc: is the argument that is counted
 * @argv: is the arguments it self
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the program name
 * @argc: the argument count
 * @argv: the argument string or program name
 * Return: nothing
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}

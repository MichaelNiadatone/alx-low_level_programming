#include <stdio.h>

/**
 * main - a function that prints its name
 * @argc: argc parameter
 * @argv: list array
 * Return: 0  success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("argv index %d is = %s\n", i, argv[i]);
	}

	return (0);

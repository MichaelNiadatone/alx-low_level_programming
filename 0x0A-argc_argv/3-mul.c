#include <stdio.h>
#include <stdlib.h>

/**
 * main -funtion to print its name
 * @argc: argc parameter
 * @argv: list arrays
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int results = 0, num1, num2;

	if (argc != 3)
	{
		printf("%s\n", error);
		return (1);
	}
	num1 = argv[1];
	num2 = argv[2];
	results = num1 * num2;

	printf("%d\n", result);
	return (0);
}

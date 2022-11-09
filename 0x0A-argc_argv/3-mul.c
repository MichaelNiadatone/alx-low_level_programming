#include "main.h"
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
	int result, num1, num2;

	if (argc == 3)
	{
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
	}

	printf("error\n");
	return (1);
}

#include <stdio.h>

/**
 * main -a function to print its name
 * @argc: argc parameter
 * @argv: list of argc arrays
 * Return: 0 success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

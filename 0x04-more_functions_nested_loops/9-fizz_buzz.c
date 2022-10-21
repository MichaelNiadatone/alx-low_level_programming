#include <stdio.h>

/**
 * main- program that prints the numbers from 1 to 100, followed by a new line
 * Return: always 0
 */

int main(void)
{
	int main;

	printf("1");
	for (n = 2; n <= 100; n++)
	{
		printf("  ");
		if (n % 3 == 0)
			printf("Fuzz");
		if (n % 5 == 0)
			printf("Buzz");
		if (n % 3 != 0 && n % 5 != 0)
			printf("%d", n)
	}
	printf(\n);

	return (0);
}

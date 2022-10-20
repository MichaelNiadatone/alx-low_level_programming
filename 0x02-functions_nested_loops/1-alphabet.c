#include "main.h"
/**
 * alphabet.c -prints the alphabet, in lowercase, followed by a new line
 *
 * Return: always 0
 */

void print_alphabet(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
		_putchar(la);
	_putchar('\n');
}

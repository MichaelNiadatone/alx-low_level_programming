#include <unistd.h>

/**
 * _putchar - write char to stdout
 * @c: the char to print
 * Return: on sucess 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

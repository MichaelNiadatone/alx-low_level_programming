#include <unistd.h>

/**
 * _putchar -writes the char c to stdout
 * @c: the char tto print
 * Return: on sucess 1 else 0
 */

int _putchar(char c)
{ 
	return (write(1, &c, 1));
}

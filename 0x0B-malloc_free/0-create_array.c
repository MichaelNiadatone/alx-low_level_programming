#include "main.h"

/**
 * create_array -function that creates an array of chars
 * @size: number of element of array
 * @c: char
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int position;

	if (size == 0)
	{
		return (NULL);
	}

	buffer = (char *) malloc(size * sizeof(c));

	if (buffer == 0)
	{
		return (NULL);
	}
	else
	{
		position = 0;
		while (position < size)
		{
			*(buffer + position) = c;
			position++;
		}
		return (buffer);
	}
}

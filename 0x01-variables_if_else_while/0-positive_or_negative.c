#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
<<<<<<< HEAD
 * main - print whether the number stored is positive or negative
 *
 * return: always 0
=======
 * main -print whether the number stored is positive or negative
 *
 * return: 0
>>>>>>> 7671b3b980621f5a119c709d77d207660da005b5
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
<<<<<<< HEAD
		printf("%d is positive\n", n);
=======
		printf("%d is posstive\n", n);
>>>>>>> 7671b3b980621f5a119c709d77d207660da005b5
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}

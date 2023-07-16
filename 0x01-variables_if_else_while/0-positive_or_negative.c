#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - Entry point
 * Description: this function returns a condition statement
 * Return: This returns 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%i is negative\n", n);
	}
	if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	/* your code goes there */
	return (0);
}

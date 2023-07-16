#include <unistd.h>

/**
 * main - Entry point
 * Desciption: this code make use of the right function
 * Return: returns error 1
 */

int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, str, 59);
	return (1);
}

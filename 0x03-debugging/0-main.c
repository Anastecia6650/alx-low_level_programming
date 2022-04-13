#include "main.h"

/**
 * main - Test if function print positive or negative
 *
 * Return: Always success
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	positive_or_negative(n);

	return (0);
}

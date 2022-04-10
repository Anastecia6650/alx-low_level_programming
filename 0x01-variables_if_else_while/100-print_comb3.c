#include <stdio.h>
/**
 * main - main block
 * Description: Print all possible combinations.
 * Numbers must be separated by commas.
 * 01 and 10 are considered as the same 
 * Print only the smallest combination.
 * Numbers should be printed in ascending.
 * You can only use `putchar`.
 * You can only use `putchar` up to 5 times.
 * You are not allowed to use any variable 
 * Return: 0
 */
int main(void)
{
	int i, j, k;

i = 0;

	while (i < 100)
	{
		j = i % 10; /* singles digit */
		k = i / 10; /* doubles digit */

		if (k < j)
		{
			putchar(k + '0');
			putchar(j + '0');

 (i < 89)
			{
				putchar(44);
				putchar(32);
			}
		}

i++;
	}
	putchar('\n');

	return (0);
}

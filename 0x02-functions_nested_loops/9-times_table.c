#include "main.h"

/**
 * times_table - Prints the 9 times table
 *
 * Return: NO return.
 */

void times_table(void)
{
	int i;
	int j;

	/* my code goes here */

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar((i * j) / 10 + '0');
			_putchar((i * j) % 10 + '0');
			_putchar(',');
			_putchar(' '):
		}
		_putchar('\n');
	}
}

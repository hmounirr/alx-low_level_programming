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
			if ((i * j) < 10)
				_putchar((i * j) + '0');
			else
			{
				_putchar((i * j) / 10 + '0');
				_putchar((i * j) % 10 + '0');
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

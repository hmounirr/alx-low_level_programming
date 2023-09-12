#include "main.h"

/**
 * jack_bauer - a Function that prints Jack Bauer's every minute
 *             of his day
 * Return: NULL.
 */

void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i <= 23; i++)
		for (j = 0; j <= 59; j++)
		{
			if (i >= 0 && i < 10)
			{
				_putchar(0 + '0');
				_putchar(i + '0');
			}
			else
				_putchar(i + '0');
			_putchar(':');
			if (j >= 0 && j < 10)
			{
				_putchar(0 + '0');
				_putchar(j + '0');
			}
			else
				_putchar(j + '0');
			_putchar('\n');
		}
}

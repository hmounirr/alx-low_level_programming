#include "main.h"

/**
 * more_numbers - print 10 times numbers from 0 to 14.
 *
 * Return: No return.
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j / 10 == 1)
				_putchar(j / 10 + '0');
			else if (j % 10)
				_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}

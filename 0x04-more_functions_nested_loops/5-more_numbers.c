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

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(j + '0');
			if (j == 14)
				_putchar('\n');
		}
	}
	_putchar('\n');
}

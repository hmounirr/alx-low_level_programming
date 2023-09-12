#include "main.h"

/**
 * print_to_98 - Prints numberz from a certain number to 98
 * @n: integer insered by the user
 *
 * Return: No return
 */

void print_to_98(int n)
{
	int i;
	int j;

	/* my code goes here */

	for (i = n; i <= 98 ; i++)
		for  (j = n; j <= 98 ; j--)
		{
			if (n > 98)
			{
				_putchar(j / 10 + '0');
				_putchar(j % 10 + '0');
				if (j < 98)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else if (n < 98)
			{
				if (n < 10 && n > 0)
					_putchar(i + '0');
				else if (n < 0)
				{
					_putchar(i / 10 + '0');
					_putchar(i % 10 + '0');
				}
				if (i < 98)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
				_putchar(98 + '0');
		}
}

#include "main,h"

/**
 * print_line - Function that prints a line
 * @n: number of repition of the character '_'
 *     should be repeated
 *
 * Return: No return.
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i <= n; i++)
			_putchar('_');
		_putchar('\n');
	}
}

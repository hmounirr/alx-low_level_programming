#include "main.h"

/**
 * print_diagonal - Prints a diagonal on the terminal
 * @n: number of times the character '\' should be printed
 *
 * Return: NO return 
 */

void print_diagonal(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('\\');
			_putchar('\n');
			_putchar(i * ' ' + '0');
		}
		_putchar('\n');
	}
}

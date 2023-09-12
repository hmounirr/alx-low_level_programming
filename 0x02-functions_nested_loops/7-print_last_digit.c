#include "main.h"

/**
 * print_last_digit - A function that prints last digit of a number
 * @r: Number inserted by the user
 *
 * Return: Always 0.
 */

int print_last_digit(int r)
{
	int l;

	l = r % 10;
	if (l < 0)
		l = -l;
	_putchar(l + '0');
	return (l);
}

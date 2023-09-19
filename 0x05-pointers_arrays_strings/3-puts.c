#include "main.h"
#include <stdio.h>
/**
 * _puts - Function that prints a string, followed by a new line.
 *         to stdout.
 * @str: pointer that points at our desired string
 *
 * Return: void
 */

void _puts(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

#include "main.h"
#include <string.h>

/**
 * print_rev - Function that prints a string in reverse
 * @s: pointer that points on the first character of our string
 *
 * Return: No return only prints
 */

void print_rev(char *s)
{
	int i;

	for (i = strlen(s); i >= 0; i--)
	{
		_putchar(s[i]);
	}
}

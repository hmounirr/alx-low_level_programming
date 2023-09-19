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
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = strlen(s); j >= 0; j--)
			s[i] = s[j];
		_putchar(s[i]);
	}
	_putchar('\n');
}

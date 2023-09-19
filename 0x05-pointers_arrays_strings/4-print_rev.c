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
	char temp;

	for (i = strlen(s) - 1; i >= 0; i--)
		for (j = 0; j < i; j++)
		{
			temp = s[j + 1];
			s[j + 1] = s[j];
			s[j] = temp;
		}
	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	_putchar('\n');
}

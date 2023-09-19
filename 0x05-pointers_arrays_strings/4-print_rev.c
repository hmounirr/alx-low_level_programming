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

	for (i = 0; s[i] != '\0'; i++)
		for (j = strlen(s) - 1; j >= 0; j--)
		{
			temp = *(s[j]);
			*(s[j]) = *(s[i]);
			*(s[i]) = temp;
		}
}

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
	int i = 0;
	int len;
	char temp;

	len = strlen(s);
	while (s[i] != '\0')
	{
		temp = s[len];
		s[len] = s[i];
		s[i] = temp;
		i++;
		len--;
	}
}

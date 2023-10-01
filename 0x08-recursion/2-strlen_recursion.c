#include "main.h"

/**
 * _strlen_recursion - Function that returns the length of a string
 * @s: string.
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		return (1 + _strlen_recursion(&s[i + 1]));
	}
	else
		return (0);
}

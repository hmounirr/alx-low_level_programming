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
		i++;
		_strlen_recursion(&s[i]);
	}

	else
		return (i);
}

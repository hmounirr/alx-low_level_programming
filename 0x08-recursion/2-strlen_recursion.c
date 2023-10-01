#include "main.h"

/**
 * _strlen_recursion - Function that returns the length of a string
 * @s: string.
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (s[length] != '\0')
	{
		_strlen_recursion(&s[length]);
		length++;
	}
	return (length);
}

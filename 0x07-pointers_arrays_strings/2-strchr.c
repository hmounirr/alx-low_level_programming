#include "main.h"

/**
 * _strchr - function That search for a character in a string
 * @s: string1s pointer
 * @c: thec charcter we wanna search for
 *
 * Return: return the first occurence of the character
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s[i]);
		}
		else
			return ('\0');
	}
}

#include "main.h"

/**
 * _islower - Compares if a character is a lowercase or uppercase
 * @c: The argument of the function
 *
 * Return: 1 if the character is lower or upper
 * ifnot it returns 0.
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

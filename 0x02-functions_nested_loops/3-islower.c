#include "main.h"

/**
 * _islower - Compares if a character is a lowercase or not
 *
 * Return: 1 if the character is lower
 * ifnot it returns 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return(0);
}

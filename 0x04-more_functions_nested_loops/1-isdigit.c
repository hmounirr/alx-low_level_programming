#include "main.h"

/**
 * _isdigit - checks if the variable inserted is a digit or not
 * @c: variable that the user insert
 *
 * Return: 1 if c is a digit otherwise it returns 0.
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}

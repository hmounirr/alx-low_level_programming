#include "main.h"

/**
 * _pow_recursion - Function that returns the value x raised to the power of y
 * @x: the integer to be raised
 * @y: the power of integer x
 *
 * Return: x powerd to y.
 */
int _pow_recursion(int x, int y)
{
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	else if (y == 0)
		return (1);
	else
		return (-1);
}

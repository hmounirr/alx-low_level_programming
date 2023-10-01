#include "main.h"
#include <math.h>
/**
 * _sqrt_recursion - Function that returns square root of a number
 * @n: number to handle
 *
 * Return: the square of n
 */
int _sqrt_recursion(int n)
{
	if (n > 0)
		return (exp(0.5*log(n)));
	else if (n == 0)
		return (0);
	else
		return (-1);
}

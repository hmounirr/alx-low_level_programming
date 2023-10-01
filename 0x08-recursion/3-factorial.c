#include "main.h"

/**
 * factorial - Function that returbs the factorial of a given number
 * @n : number to be calculeted
 *
 * Return: 0 if n is 1, -1 if n is lower than 0.
 */

int factorial(int n)
{
	int i = 0;

	if (i < n)
	{
		if (n > 0)
			return (1 * factorial(i + 1));
		else if (n == 0)
			return (1);
		else
			return (-1);
	}
}

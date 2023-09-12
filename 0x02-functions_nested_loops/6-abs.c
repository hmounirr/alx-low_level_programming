#include "main.h"
#include <stdlib.h>

/**
 * _abs - Return the absolute value of an integer
 * @r: argument typed by the user
 *
 * Return: the absolute value of an integer
 */

int _abs(int r)
{
	if (r < 0)
	{
		r = abs(r);
		return (r);
	}
	else if (r >= 0)
		return (r);
	return (0);
}

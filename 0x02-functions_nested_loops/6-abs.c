#include "main.h"
#include <stdlib.h>

/**
 * _abs - Return the absolute value of an integer
 * @r: argument typed by the user
 *
 * Return - the absolute value of an integer
 */

int _abs(int r)
{
	int n;

	n = print_sign(r);
	if (n == 1)
		return (r);
	else if (n == 0)
		return (r);
	else
	{
		r = abs(r);
		return (r);
	}
}

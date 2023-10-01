#include "main.h"
#include <math.h>
/**
 * heron_sqrt - returns the natural square root of a number.
 * @n: input number.
 * @close: close guess for the square root
 *
 * Return: natural square root.
 */
int heron_sqrt(int n, double close)
{
    double next_num = 0.5 * (close + n / close);

    if (fabs(next_num - close) < 1e-5)
    {
        int new_num = (int)next_num;
        if (new_num * new_num == n)
            return new_num;
        else
            return (-1);
    }

    return heron_sqrt(n, next_num);
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input number.
 * Return: natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	return (heron_sqrt(n, 1.0));
}

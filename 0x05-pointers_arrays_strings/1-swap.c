#include "main.h"

/**
 * swap_int - a function that swaps the value of two integers
 * @a: pointer that points on the first integer
 * @b: pointer that points on the second integer
 *
 * Return: Nor return (void)
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

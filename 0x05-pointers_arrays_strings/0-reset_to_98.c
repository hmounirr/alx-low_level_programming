#include "main.h"

/**
 * reset_to_98 - Function that takes a pointer to an int as a parameter and updates the value it points to 98
 * @n: a pointer that points to an integer
 *
 * Return: void
 */

void reset_to_98(int *n)
{
	int a = 98;
	n = &a;
}

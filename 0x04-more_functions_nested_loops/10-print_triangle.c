#include "main.h"

/**
 * print_triangle - Function that prints a triangle
 * @size: size of the triangle.
 *
 * Return: No return
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	for (i = size; i > 0; i--)
	{
		for (j = 0; j < size; j++)
		{
			if (j < i)
				_putchar(' ');
			_putchar('#');
		}
		_putchar('\n');
	}
}

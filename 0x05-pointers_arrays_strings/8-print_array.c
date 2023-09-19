#include "main.h"
#include <stdio.h>
/**
 * print_array - print elements of an array of integers
 * @a: pointer that points at the first elements of the array
 * @n: number of elements of the array
 *
 * Return: No return
 */

void print_array(int *a, int n);
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}

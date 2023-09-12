#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Prints numberz from a certain number to 98
 * @n: integer insered by the user
 *
 * Return: No return
 */

void print_to_98(int n)
{
	int i;
	int j;

	/* my code goes here */

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
				printf("%d, ", i);
			else if (i == 98)
				printf("%d\n", i);
		}
	} else if (n >= 98)
	{
		for (j = n; j >= 98; j--)
		{
			if (j != 98)
				printf("%d, ", j);
			else if (j == 98)
				printf("%d\n", j);
		}
	}
}
